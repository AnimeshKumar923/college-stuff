import java.io.IOException;
import java.io.PrintWriter;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/EmployeeServlet")
public class EmployeeServlet extends HttpServlet {
  
  // Update these with your actual DB connection details!
  private static final String DB_URL = "jdbc:mysql://localhost:3306/mydatabase";
  private static final String DB_USER = "root";
  private static final String DB_PASS = "password";
  
  @Override
  protected void doGet(HttpServletRequest request, HttpServletResponse response)
      throws ServletException, IOException {
      
    response.setContentType("text/html");
    PrintWriter out = response.getWriter();
    String empId = request.getParameter("empId");
    
    Connection conn = null;
    PreparedStatement stmt = null;
    ResultSet rs = null;
    
    try {
      // Load the MySQL JDBC Driver (for newer JDBC versions, this might be optional)
      Class.forName("com.mysql.cj.jdbc.Driver");
      conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASS);
      
      if (empId != null && !empId.trim().isEmpty()) {
        // Fetch a specific employee by ID
        String sql = "SELECT * FROM employees WHERE id = ?";
        stmt = conn.prepareStatement(sql);
        stmt.setInt(1, Integer.parseInt(empId));
      } else {
        // Fetch all employees
        String sql = "SELECT * FROM employees";
        stmt = conn.prepareStatement(sql);
      }
      
      rs = stmt.executeQuery();
      
      out.println("<h2>Employee Details</h2>");
      out.println("<table border='1'>");
      out.println("<tr><th>ID</th><th>Name</th><th>Department</th></tr>");
      
      // Loop through the result set and display each employee's info
      while (rs.next()) {
        int id = rs.getInt("id");
        String name = rs.getString("name");
        String department = rs.getString("department");
        
        out.println("<tr>");
        out.println("<td>" + id + "</td>");
        out.println("<td>" + name + "</td>");
        out.println("<td>" + department + "</td>");
        out.println("</tr>");
      }
      out.println("</table>");
      
    } catch (ClassNotFoundException e) {
      out.println("<h3>Error: JDBC Driver not found!</h3>");
    } catch (SQLException e) {
      out.println("<h3>Database error: " + e.getMessage() + "</h3>");
    } finally {
      // Clean up resources
      try { if (rs != null) rs.close(); } catch (SQLException e) { }
      try { if (stmt != null) stmt.close(); } catch (SQLException e) { }
      try { if (conn != null) conn.close(); } catch (SQLException e) { }
    }
  }
}

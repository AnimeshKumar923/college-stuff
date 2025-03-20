import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/LoginServlet")
public class LoginServlet extends HttpServlet {
  
  @Override
  protected void doPost(HttpServletRequest request, HttpServletResponse response)
      throws ServletException, IOException {
      
    response.setContentType("text/html");
    PrintWriter out = response.getWriter();
    
    // Get the username and password from the form
    String username = request.getParameter("username");
    String password = request.getParameter("password");
    
    // For demonstration, we use simple hard-coded credentials.
    if ("user".equals(username) && "pass".equals(password)) {
      out.println("<h1>Welcome, " + username + "!</h1>");
      out.println("<p>You successfully logged in. Keep up the awesome work!</p>");
    } else {
      out.println("<h1>Invalid credentials.</h1>");
      out.println("<p>Please try again. Even the best of us have off days!</p>");
    }
  }
}

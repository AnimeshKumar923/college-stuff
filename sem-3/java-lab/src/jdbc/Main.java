package jdbc;

import java.beans.Statement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;;

public class Main {
    public static void main(String[] args) throws Exception {
        String url="jdbc:oracle:thin:@localhost:1521:XE";
        String username="jdbc";
        String password="root";

        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection con=DriverManager.getConnection(url, username, password);
            java.sql.Statement stmt=con.createStatement();
            PreparedStatement ps=con.prepareStatement("insert into Student708 values(?,?,?)");
            ps.setInt(1, 1000);
            ps.setString(2, "Mumbai");
            ps.setString(3, "Lucknow");
            int i=ps.executeUpdate();
            System.out.println(i+"records inserted");
            con.close();


            stmt.executeQuery("INSERT INTO Student708 (StudentID, FirstName, Address) VALUES ()");
        } catch (Exception e) {
            // TODO: handle exception
        }
    }    
}

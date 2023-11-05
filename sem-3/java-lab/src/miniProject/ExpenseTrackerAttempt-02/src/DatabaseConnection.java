import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;

public class DatabaseConnection {
    public static Connection connect() {
        Connection connection = null;
        try {
            // Load the SQLite JDBC driver
            Class.forName("org.sqlite.JDBC");

            // Database URL. Change this to your database location.
            String url = "jdbc:sqlite:src/expenses.db";

            // Create a connection to the database
            connection = DriverManager.getConnection(url);
            System.out.println("Connected to the SQLite database.");
        } catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
        }
        return connection;
    }

        public static List<Expense> getExpenses() {
        List<Expense> expenses = new ArrayList<>();
        try {
            Connection connection = connect();

            String query = "SELECT name, amount FROM expenses";
            PreparedStatement statement = connection.prepareStatement(query);
            ResultSet resultSet = statement.executeQuery();

            while (resultSet.next()) {
                String name = resultSet.getString("name");
                double amount = resultSet.getDouble("amount");
                expenses.add(new Expense(name, amount));
            }

            resultSet.close();
            statement.close();
            connection.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        return expenses;
    }
}

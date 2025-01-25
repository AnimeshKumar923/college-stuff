import java.util.Scanner;

class Employee {
    int id;
    String name;
    String dateOfJoining;
    double salary;
    String department;

    public Employee(int id, String name, String dateOfJoining, double salary, String department) {
        this.id = id;
        this.name = name;
        this.dateOfJoining = dateOfJoining;
        this.salary = salary;
        this.department = department;
    }

    public void display() {
        System.out.println("ID: " + id + ", Name: " + name + ", Date of Joining: " + dateOfJoining + 
                           ", Salary: " + salary + ", Department: " + department);
    }
}

public class Application {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of employees: ");
        int numEmployees = scanner.nextInt();
        scanner.nextLine(); // Consume newline character

        Employee[] employees = new Employee[numEmployees];

        for (int i = 0; i < numEmployees; i++) {
            System.out.println("\nEnter details for Employee " + (i + 1) + ":");

            System.out.print("ID: ");
            int id = scanner.nextInt();
            scanner.nextLine(); // Consume newline character

            System.out.print("Name: ");
            String name = scanner.nextLine();

            System.out.print("Date of Joining (DD-MM-YYYY): ");
            String dateOfJoining = scanner.nextLine();

            System.out.print("Salary: ");
            double salary = scanner.nextDouble();
            scanner.nextLine(); // Consume newline character

            System.out.print("Department: ");
            String department = scanner.nextLine();

            employees[i] = new Employee(id, name, dateOfJoining, salary, department);
        }

        System.out.println("\nEmployee Information:");
        for (Employee emp : employees) {
            emp.display();
        }

        scanner.close();
    }
}

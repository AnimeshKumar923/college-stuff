import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Inventory inventory = new Inventory();
    Scanner scanner = new Scanner(System.in);
    boolean running = true;

    while (running) {
      System.out.println("\n--- Video Rental Inventory System ---");
      System.out.println("1. Add Video");
      System.out.println("2. Rent Video");
      System.out.println("3. Return Video");
      System.out.println("4. Display Inventory");
      System.out.println("5. Exit");
      System.out.print("Choose an option: ");
      int choice = scanner.nextInt();
      scanner.nextLine(); // Consume newline

      switch (choice) {
        case 1:
          System.out.print("Enter video title: ");
          String title = scanner.nextLine();
          System.out.print("Enter rental price: ");
          double price = scanner.nextDouble();
          inventory.addVideo(title, price);
          break;
        case 2:
          System.out.print("Enter video title to rent: ");
          String rentTitle = scanner.nextLine();
          inventory.rentVideo(rentTitle);
          break;
        case 3:
          System.out.print("Enter video title to return: ");
          String returnTitle = scanner.nextLine();
          inventory.returnVideo(returnTitle);
          break;
        case 4:
          inventory.displayInventory();
          break;
        case 5:
          running = false;
          System.out.println("Exiting...");
          break;
        default:
          System.out.println("Invalid option. Please try again.");
      }
    }
    scanner.close();
  }
}
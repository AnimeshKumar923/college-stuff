package exp3;

import java.util.Scanner;

abstract class Deposit {
  protected double principal;
  protected double rate;
  protected int time;

  public Deposit(double principal, double rate, int time) {
    this.principal = principal;
    this.rate = rate;
    this.time = time;
  }

  abstract double calculateInterest();
}

class FixedDeposit extends Deposit {
  public FixedDeposit(double principal, double rate, int time) {
    super(principal, rate, time);
  }

  @Override
  double calculateInterest() {
    return principal * Math.pow((1 + rate / 100), time) - principal;
  }
}

class RecurringDeposit extends Deposit {
  private int months;

  public RecurringDeposit(double monthlyDeposit, double rate, int months) {
    super(monthlyDeposit, rate, months);
    this.months = months;
  }

  @Override
  double calculateInterest() {
    double totalInterest = 0;
    for (int i = 1; i <= months; i++) {
        totalInterest += principal * Math.pow((1 + rate / 100), (months - i) / 12.0);
    }
    return totalInterest;
  }
}

public class InterestCalculator {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Choose Deposit Type: 1. FD 2. RD");
    int choice = scanner.nextInt();
    
    if (choice == 1) {
      System.out.print("Enter Principal Amount: ");
      double principal = scanner.nextDouble();
      System.out.print("Enter Rate of Interest: ");
      double rate = scanner.nextDouble();
      System.out.print("Enter Time in Years: ");
      int time = scanner.nextInt();
      
      FixedDeposit fd = new FixedDeposit(principal, rate, time);
      System.out.println("FD Interest: " + fd.calculateInterest());
    } else if (choice == 2) {
      System.out.print("Enter Monthly Deposit Amount: ");
      double monthlyDeposit = scanner.nextDouble();
      System.out.print("Enter Rate of Interest: ");
      double rate = scanner.nextDouble();
      System.out.print("Enter Number of Months: ");
      int months = scanner.nextInt();
      
      RecurringDeposit rd = new RecurringDeposit(monthlyDeposit, rate, months);
      System.out.println("RD Interest: " + rd.calculateInterest());
    } else {
      System.out.println("Invalid choice!");
    }
    scanner.close();
  }
}


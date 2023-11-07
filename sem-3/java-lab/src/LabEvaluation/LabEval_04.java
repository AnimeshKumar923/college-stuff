// WAP that simulates a simple bank account with a balance and demonstrates exception handling when attempting to withdraw more than the balance allows.

package LabEvaluation;

public class LabEval_04 {
  public static class Bank{
    protected double balance;

    public void deposit(int amt){
      balance=balance+amt;
      System.out.println("Updated balance: "+balance);
    }
    
    public void withdraw(int amt)throws Exception{
      if(balance>amt) {
        balance=balance-amt;
        System.out.println("Updated balance: "+balance);
      }
      else{
        // System.out.println("Can't withdraw more than balance amount!");
        throw new Exception("Can't withdraw more than balance amount!");

      }
    }

    public void checkBalance(){
      System.out.println("Current balance: "+balance);
    }
  }  

  public class Main{
    public static void main(String[] args) throws Exception {
      Bank b=new Bank();
      b.deposit(50);
      b.withdraw(5);
      b.withdraw(55);
    }
  }
}




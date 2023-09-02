/*  :et's assume you are working as a schema designer at a company named Harbour in IT market. The schema should hold some information regarding employees including name, year of joining, salary and address.

WAP in Java to implement this design.

*/

import java.util.Scanner;


public class LabEvaluation_2023_09_02 {
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);

        CompanyData e1=new CompanyData();

        
        while(true){
            
            System.out.println("Enter 1 to input information\nEnter 2 to print default users\nEnter 0 to exit: ");

            int option=in.nextInt();
            if(option==0){
                break;
            }
            if(option==1){
                e1.getInput();
                e1.disp();
            }
            if(option==2){
                e1.defaultUsers();
                e1.disp();
            }
        }
        
    }

    public static class CompanyData{

        Scanner in=new Scanner(System.in);

        private int yearOfJoining;
        private int salary;
        private String address;
        private String name;

        CompanyData(){
            yearOfJoining=0;
            salary=0;
            address="default";
            name="default";
        }


        void defaultUsers(){
            System.out.println(" Name "+" Year of joining "+" Salary "+" Address ");

            System.out.println(" Stuart "+" 2018 "+" 25000 "+" 121 Street ");
            System.out.println(" Martha "+" 2021 "+" 55000 "+" 202 Street ");
            System.out.println(" Johri "+" 2023 "+" 96000 "+" 125 Street ");
        }

        void getInput(){
            System.out.print("Enter Name: ");
            name=in.nextLine();
            
            System.out.print("\nEnter year of joining: ");
            yearOfJoining=in.nextInt();

            System.out.print("\nEnter salary: ");
            salary=in.nextInt();
            
            System.out.print("\nEnter address: ");
            address=in.nextLine();
        }

        void disp(){
            System.out.println("Name: "+name);
            System.out.println("Year of joining: "+yearOfJoining);
            System.out.println("Salary: "+salary);
            System.out.println("Address: "+address);
        }
    }
}

/*  :et's assume you are working as a schema designer at a company named Harbour in IT market. The schema should hold some information regarding employees including name, year of joining, salary and address.

WAP in Java to implement this design.

*/

import java.util.Scanner;

public class LabEvaluation_2023_09_02 {
    public static void main(String[] args){
        Scanner in=new Scanner(System.in);


    }

    public class CompanyData{

        private int yearOfJoining;
        private int salary;
        private String address;
        private String name;


        void getInput(){
            
        }

        void disp(){
            System.out.println("Name: "+name);
            System.out.println("Year of joining: "+yearOfJoining);
            System.out.println("Salary: "+salary);
            System.out.println("Address: "+address);
        }
    }
}

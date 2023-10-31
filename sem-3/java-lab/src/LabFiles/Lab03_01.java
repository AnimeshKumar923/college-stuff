package LabFiles;
public class Lab03_01 {
    public static void main(String[] args) {
        
        Employee e1 = new Employee(101, "AK");
        e1.display();

        Employee e2 = new Employee(125,"F");
        e2.display();
    
    }

    static class Employee{

        int empid;
        String name;
        static String company="newAge";

        Employee(int empid, String name){
            this.empid=empid;
            this.name=name;
            // this.company=company;
        }

        void display(){
            System.out.println(empid + " " + name + " "+ company);
        }
    }
}

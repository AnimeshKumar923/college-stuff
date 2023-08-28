// copy constructor demo in LSM class (Navdeep Sir)
// Date: 2023-08-28


public class Lab03_02 {
    public static void main(String[] args){
        Emp e1=new Emp("Ra",18);
        e1.disp();

        Emp e3=new Emp(e1);
        e3.disp();
    }

    static class Emp{
        private String e_name; // instance variable
        private int e_age;

        Emp(String e_name, int e_age){
            this.e_age=e_age;
            this.e_name=e_name;
        }

        Emp(Emp e2){ // copy constructor
            e_age=e2.e_age;
            e_name=e2.e_name;
        }


        void disp(){
            
        }
    }
}

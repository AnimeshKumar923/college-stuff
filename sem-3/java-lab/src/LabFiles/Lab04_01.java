package LabFiles;
public class Lab04_01 {
    public static void main(String[] args){

        B x1=new B();
        x1.disp(98);
    }

    static class A {
    
        protected String name;
        protected int age;
        int a=245;
    }

    static class B extends A{
        int a=45;

        void disp(int a){
            System.out.println(a);
            System.out.println(this.a);
            System.out.println(super.a);
        }
    }

}

import java.util.Scanner;


public class Lab05_01 {
    abstract static class Dog{
        abstract void bark();
        abstract void wag();
        abstract void run();
        abstract void breed(String breed);
    }

    static class DogChild_01 extends Dog{

        String breed;
        String bark,wag,run;

        void bark(){
            System.out.println("woof");
        }
        void wag(){
            System.out.println("wagging tail");
        }
        void run(){
            System.out.println("*dog runs*");
        }
        void breed(String breed){
            this.breed=breed;
            
            System.out.println("Breed of dog = ");
        };
    }

    public static void main(String[] args){
        Scanner in=new Scanner(System.in);
        DogChild_01 p1=new DogChild_01();
        String breed;
        p1.bark();
        p1.wag();
        p1.run();
        
        System.out.print("Enter breed of dog: ");
        breed=in.next();
        p1.breed(breed);

    }
}

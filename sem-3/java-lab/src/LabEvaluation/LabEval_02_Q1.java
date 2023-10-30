// program on working of overriding methods and overloading constructors in java

package LabEvaluation;

public class LabEval_02_Q1 {
    public static void main(String[] args) {
        // Create instances of Animal and Dog
        Animal animal = new Animal("\nNormal Animal");
        Dog myDog = new Dog("\nTinku");

        // Call the makeSound method on both objects
        animal.makeSound();
        myDog.makeSound();
    }
}

class Animal {
    String name;

    public Animal(String name) {
        this.name = name;
    }

    public void makeSound() {
        System.out.println(name + " makes a normal animal sound.");
    }
}

class Dog extends Animal {
    public Dog(String name) {
        super(name);
    }

    
    public void makeSound() {
        System.out.println(name + " barks.");
    }
}

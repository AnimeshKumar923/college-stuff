package LabEvaluation;

public class LabEval_02_Q2 {
    public static void main(String[] args) {
        // Single inheritance
        Dog myDog = new Dog();
        myDog.eat();
        myDog.bark();

        // Multilevel inheritance
        Puppy myPuppy = new Puppy();
        myPuppy.eat();
        myPuppy.bark();
        myPuppy.play();

        // Hierarchical inheritance
        Cat myCat = new Cat();
        myCat.eat();
        myCat.meow();

        // Hybrid and hybrid inheritance
        Kitten myKitten = new Kitten();
        myKitten.play();
        
    }
}

// Single inheritance
class Animal {
    void eat() {
        System.out.println("\nAnimal is eating.");
    }
}

class Dog extends Animal {
    
    void bark() {
        System.out.println("\nDog is barking.");
    }
}

// Multilevel inheritance
class Puppy extends Dog {
    void play() {
        System.out.println("\nPuppy is playing.");
    }
}

// Hierarchical inheritance
class Cat extends Animal {
    void meow() {
        System.out.println("\nCat is meowing.");
    }
}

// Hybrid inheritance
class Kitten extends Cat {
    void play() {
        System.out.println("\nKitten is playing.");
    }
}


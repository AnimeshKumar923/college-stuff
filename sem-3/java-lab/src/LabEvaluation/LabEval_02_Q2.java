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

        // Hybrid inheritance
        Kitten myKitten = new Kitten();
        myKitten.play();
        
    }
}

// Single inheritance
class Animal {
    void eat() {
        System.out.println("Animal is eating.");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking.");
    }
}

// Multilevel inheritance
class Puppy extends Dog {
    void play() {
        System.out.println("Puppy is playing.");
    }
}

// Hierarchical inheritance
class Cat extends Animal {
    void meow() {
        System.out.println("Cat is meowing.");
    }
}

// Hybrid inheritance
class Kitten extends Cat {
    void play() {
        System.out.println("Kitten is playing.");
    }
}


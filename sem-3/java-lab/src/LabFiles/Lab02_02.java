package LabFiles;
/*
 * Date: 2023-08-14 (YYYY-MM-DD)
 * Program: Classes in Java
 */

public class Lab02_02 {
    public static void main(String[] args) {
        animal a1 = new animal();
        a1.show();
    }
}

class animal {
    String s = "DOG"; // instance variable
    // static String s = "DOG"; // static variable, only occupies memory once

    void show() {
        String s = "CAT"; // local variable
        System.out.println(s);
        System.out.println(this.s);
    }
}

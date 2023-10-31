package LabFiles;
/*
 * Date: 2023-08-14 (YYYY-MM-DD)
 * Program: Classes in Java
 */

public class Lab02_03 {
    public static void main(String[] args) {
        animal a1 = new animal();
    }
}

class animal {
    {
        System.out.println("Instantiation block");
    }

    static {

        System.out.println("Static block");
    }

    public animal() {

        System.out.println("constructor block");
    }
}

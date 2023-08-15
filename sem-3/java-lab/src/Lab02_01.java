/*
 * Date: 2023-08-14 (YYYY-MM-DD)
 * Program: Classes in Java
 */

public class Lab02_01 {
    public static void main(String[] args) {
        employee e1 = new employee();
    }
}

class employee {
    employee() {
        System.out.println("Default constructor called.");
    }

    employee(int a) {
        System.out.println("Parameterized called");
    }

    employee(int a, int b) {
        System.out.println("Parameterized called");
    }
}

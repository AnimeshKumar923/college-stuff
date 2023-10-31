package LabFiles;
/*
 * Date: 2023-08-07 (YYYY-MM-DD)
 * Program: Array element insertion
 */

import java.util.Scanner;
import java.util.Arrays;

public class Lab01_02 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int size = in.nextInt();

        int[] arr = new int[size];
        arr = new int[50];

        System.out.println("Enter elements:");
        for (int i = 0; i < size; i++) {
            arr[i] = in.nextInt();
        }

        // print elements
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }

        System.out.println("Enter position to enter new element: ");
        int position = in.nextInt();
        System.out.println("Enter value to insert: ");
        int value = in.nextInt();

        for (int i = size - 1; i >= position - 1; i--) {
            arr[i + 1] = arr[i];
        }
        arr[position - 1] = value;

        System.out.println("New array:");
        for (int i = 0; i < size + 1; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
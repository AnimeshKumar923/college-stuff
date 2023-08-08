/*
 * Date: 2023-08-07 (YYYY-MM-DD)
 */

import java.util.Scanner;
import java.util.Arrays;

public class Lab01_01 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int size = in.nextInt();
        int[] arr = new int[size];

        System.out.println("Enter elements:");
        for (int i = 0; i < size; i++) {
            arr[i] = in.nextInt();
        }

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }

        // System.out.println("\n");
        // System.out.println(Arrays.toString(arr));
    }
}
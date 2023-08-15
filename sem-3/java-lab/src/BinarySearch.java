
/*
 * Date: 2023-08-14 (YYYY-MM-DD)
 * Program: Binary Search Practice (Dynamic binding)

 */
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter array size: ");
        int size = in.nextInt();
        int[] arr = new int[size];

        System.out.println("Enter elements: ");
        for (int i = 0; i < size; i++) {
            arr[i] = in.nextInt();
        }

        bubbleSort(size, arr);

    }

    static void bubbleSort(int size, int arr[]) {
        for (int i = 0; i < size; i++) {
            for (int j = 1; j < size - i; j++) {
                int flag = 0;
                if (arr[j] < arr[j - 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;

                    flag = 1;
                }
                if (flag == 0) {
                    break;
                }
            }
        }

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");

        }
    }
}

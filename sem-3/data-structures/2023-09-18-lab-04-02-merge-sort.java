// merge sort

import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner in=new Scanner(System.in);
    
    System.out.print("Enter array size: ");
    int size=in.nextInt();
    int[] arr = new int[size];

    System.out.print("Enter elements: ");
    for (int i=0; i<size; i++){
        arr[i]=in.nextInt();
    }
    
    System.out.println("Before sort: ");
    for(int i=0; i<size; i++){
        System.out.print(arr[i]+" ");
    }
    
/********************************************************

    // merge sort logic
    
    for(int i=0; i<)
    int lb=0, ub=arr.length-1;
    
    int mid=(lb+ub)/2;




    
********************************************************/




   System.out.println("\nAfter sort: ");
    for(int i=0; i<size; i++){
        System.out.print(arr[i]+" ");
    } 
    
  }
}

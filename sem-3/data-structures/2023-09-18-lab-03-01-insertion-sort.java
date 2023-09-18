// insertion sort

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
    
    // insertion sort logic
    
    for(int i=1; i<size; i++){
      int temp=arr[i];
      int j=i-1;

    while(j>=0 && arr[j]>temp){
      arr[j+1]=arr[j];
      j--;
    }

    arr[j+1]=temp;
    }
   
   System.out.println("\nAfter sort: ");
    for(int i=0; i<size; i++){
        System.out.print(arr[i]+" ");
    } 
    
  }
}

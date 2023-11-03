// given two integer array that push and pop each with distinct value, return true if this could have been result of a sequence of push and pop operation, on an initially empty stack or false otherwise.

package dataStructure;

import java.util.*;


public class LabEval_02{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        
        System.out.print("Enter option 1 or 2:");
        int option=in.nextInt();
        if (option==1) {
            int[] push={1,2,3,4,5};
            int[] pop={5,4,3,2,1};
            int len=push.length;
    
            System.out.println(verifyStackSequence(push, pop, len));
            
        } else if(option==2) {
            int[] push={1,2,3,4,5};
            int[] pop={4,3,5,1,2};
            int len=push.length;
            
            System.out.println(verifyStackSequence(push, pop, len));
        } else{
            
            int[] push=new int[5];
            int[] pop=new int[5];
            System.out.println("Enter push:");
            for (int i = 0; i < push.length; i++) {
                push[i]=in.nextInt();
            }
            
            System.out.println("Enter pop:");
            for (int i = 0; i < pop.length; i++) {
                pop[i]=in.nextInt();
            }
            int len=push.length;
            System.out.println(verifyStackSequence(push, pop, len));
        }
        
    }


    static boolean verifyStackSequence(int push[], int pop[], int len){
 
        int j = 0;
 
        Stack<Integer> st = new Stack<>();
        for (int i = 0; i < len; i++) 
        {
            st.push(push[i]);
 
            while (!st.empty() && j < len && st.peek() == pop[j]){
                st.pop();
                j++;
            }
        }
 
        return j == len;
    }
}
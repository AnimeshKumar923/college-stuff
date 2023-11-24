package LabEvaluation.FinalEval;

import java.io.*;

public class FinalEval_Q2 {
   static public class Sum implements Serializable{
        private int a;
        private int b;
        private int result;


        public void sum(int a, int b){
            a=this.a;
            b=this.b;
            this.result=a+b;
        }

        public void disp(){
            System.out.println("Sum of a & b = "+result);
        }
    }


    public static void main(String[] args) {
        Sum x1=new Sum();

        x1.sum(10, 20);
        x1.disp();

    }
}

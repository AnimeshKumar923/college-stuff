package LabEvaluation.FinalEval;

public class FinalEval_Q1 {
    static public int compareTwo(int c, int b){
        boolean res;
        if(b>c){
            res=true;
            return b;
        }else{
            res=false;
            return c;
        }
        // if(res==true){
        //     if(b>a){
        //         return b;
        //     }else{
        //         return a
        //     }
        // }
    }

    public static void main(String[] args) {
        int a=10;
        int b=15;
        int c=20;

        int first=compareTwo(a,b);
        int result=compareTwo(first, c);

        System.out.println("Max number is: "+result);
    }
}

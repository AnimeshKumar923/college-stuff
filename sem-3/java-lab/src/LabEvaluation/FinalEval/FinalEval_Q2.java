package LabEvaluation.FinalEval;

import java.io.*;

public class FinalEval_Q2 {
   static public class Sum implements Serializable{
        private int a;
        private String b;

        public Sum(int a, String b){
            this.a=a;
            this.b=b;
        }
    }


    public static void main(String[] args) throws Exception {
        Sum x1=new Sum(10, "Animesh");
        String filename = "file.ser";



        try
        {   
            FileOutputStream f = new FileOutputStream(filename);
            ObjectOutputStream o = new ObjectOutputStream(f);
             
            o.writeObject(x1);
             
            o.close();
            f.close();
             
            System.out.println("Object has been serialized");
 
        }
         
        catch(IOException e)
        {
            System.out.println("IOException is caught");
        }

        try
        {   
            FileInputStream f = new FileInputStream(filename);
            ObjectInputStream i = new ObjectInputStream(f);
             
            Sum x2=null;
            x2 = (Sum)i.readObject();
             
            i.close();
            f.close();
             
            System.out.println("Object has been deserialized ");
            System.out.println("a = " + x2.a);
            System.out.println("b = " + x2.b);
        }
         
        catch(IOException e)
        {
            System.out.println("IOException is caught");
        }

    }
}

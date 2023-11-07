package LabEval_03;

import java.io.*;

public class LabEval_03 {
    public static void main(String[] args) throws Exception {
        FileReader fr=new FileReader("/workspaces/college-stuff/sem-3/java-lab/src/Eval_03/grade.txt");    
          int i=fr.read();    
          while((i=fr.read())!=-1){
            System.out.print((char)i);    
          }
          fr.close();
    }
}

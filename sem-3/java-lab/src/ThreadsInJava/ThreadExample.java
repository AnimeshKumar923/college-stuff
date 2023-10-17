package ThreadsInJava;

import java.lang.*;
import java.util.*;

public class ThreadExample extends Thread{
    public void run(){
        try {
            for (int i = 0; i < 5; i++) {
            System.out.println("Thread Running");
            Thread.sleep(2000);
        }
        } catch (Exception e) {
            System.out.println("ERROR!!!");
        }
            // TODO: handle exception
    }

    
}

class QP{
    public static void main(String[] args) {
        ThreadExample x1=new ThreadExample();
        Thread t1=new Thread(x1);
        System.out.println(t1.getName());
        t1.start();
    }
    
}

package ThreadsInJava;

import java.lang.*;
import java.util.*;

public class ThreadExample02{
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

class M extends Thread{
    public static void main(String[] args) {
        ThreadExample02 x1=new ThreadExample02();
        Thread t1=new Thread();
        System.out.println(t1.getName());
        t1.start();
    }
}


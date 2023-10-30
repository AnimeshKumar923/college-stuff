package dataStructure;

import java.util.*;


public class Stacks {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);

        Queue<String> q = new LinkedList<String>();

        q.add("a");
        q.add("b");
        q.add("c");
        q.add("d");
        q.add("e");

        q.poll();
        System.out.println(q);
    }
}

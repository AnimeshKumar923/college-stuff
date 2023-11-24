package dataStructure.FinalLabEval;

import java.util.*;

public class FinalEval_Q2 {
    
    static class Node {
    public int value;
    public Node next;  
    }
 
   static class NodeOp {
        public void pushNode(Node[] head, int value) {
            Node node = new Node();
            node.value = value;
            node.next = head[0];
            head[0] = node;
        }
    }
   
    public static void main(String[] args) {
            Node[] head = new Node[1];
            NodeOp temp = new NodeOp();
            for (int i = 5; i > 0; i--) {
                temp.pushNode(head, i);
            }
            ArrayList<Integer> v = new ArrayList<Integer>();
            Node current = head[0];
            while (current != null) {
                v.add(current.value);
                current = current.next;
            }
            System.out.print("Middle Value Of Linked List = ");
            System.out.println(v.get(v.size() / 2));
        }
}

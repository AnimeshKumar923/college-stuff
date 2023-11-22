package dataStructure.graph;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);

        System.out.println("Enter no of vertices: ");
        int v=in.nextInt();

        CustomGraph g=new CustomGraph(v);

        System.out.println("Enter no of edges: ");
        int edges=in.nextInt();

        for(int i=0; i<edges; i++){
            System.out.println("Enter edge "+(i+1)+" (source destination): ");
            int src=in.nextInt();
            int dest=in.nextInt();

            g.addEdge(src, dest);
        }

        System.out.println("Graph representation: ");
        g.printGraph();

        in.close();
    }
}
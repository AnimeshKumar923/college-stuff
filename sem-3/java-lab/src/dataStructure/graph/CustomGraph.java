package dataStructure.graph;

import java.util.*;

public class CustomGraph {
    private int vertices;
    private ArrayList<ArrayList<Integer>> adjlist;

    public CustomGraph(int vertices){
        this.vertices=vertices;
        this.adjlist=new ArrayList<>(vertices);
        
        for(int i=0; i<=vertices; i++){
            adjlist.add(new ArrayList<>());
        };
    }

    public void addEdge(int src, int dest){
        adjlist.get(src).add(dest);
        adjlist.get(dest).add(src);
    }

    public void printGraph(){
        for(int i=1; i<=vertices; i++){
            System.out.println("vertex "+i+" is connected to: ");
            for(int neighbour: adjlist.get(i)){
                System.out.println(neighbour+" ");
            }
            System.out.println();
        }
    }
}
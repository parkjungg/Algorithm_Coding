using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int n, int[,] wires) {
        int answer = int.MaxValue;
        
        List<int>[] tree = new List<int>[n + 1];
        for(int i = 0; i <= n; i++)
        {
            tree[i] = new List<int>();
        }
        
        for(int i = 0; i < wires.GetLength(0); i++)
        {
            int a = wires[i, 0];
            int b = wires[i, 1];
            tree[a].Add(b);
            tree[b].Add(a);
        }
        
        for(int i = 0; i < wires.GetLength(0); i++)
        {
            int a = wires[i, 0];
            int b = wires[i, 1];
            
            int subSize = DFS(a, b, tree);
            int diff = Math.Abs((n - subSize) - subSize);
            answer = Math.Min(diff, answer);
        }
        
        
        return answer;
    }
    
    private int DFS(int node, int parent, List<int>[] tree)
    {
        int size = 1;
        foreach(var neighbor in tree[node])
        {
            if(neighbor != parent)
            {
                size += DFS(neighbor, node, tree);
            }
        }
        return size;
    }
}
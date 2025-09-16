using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int x, int y, int n) {
        int answer = 0;
        answer = BFS(x, y, n);
        return answer;
    }
    
    private int BFS(int x, int y, int n)
    {
        if(x == y) return 0;
        
        var dist = new int[y + 1];
        Array.Fill(dist, -1);
        
        var q = new Queue<int>();
        dist[x] = 0;
        q.Enqueue(x);
        
        while(q.Count > 0)
        {
            int cur = q.Dequeue();
            if(cur == y) return dist[cur];
            
            int[] nexts = {cur + n, cur * 2, cur * 3};
            foreach(var next in nexts)
            {
                if(next <= y && dist[next] == -1)
                {
                    dist[next] = dist[cur] + 1;
                    q.Enqueue(next);
                }
            }
        }
        return -1;
    }
}
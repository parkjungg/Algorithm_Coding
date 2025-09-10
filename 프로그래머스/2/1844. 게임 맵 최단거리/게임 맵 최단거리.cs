using System;
using System.Collections.Generic;

class Solution {
    private bool[,] visited;
    private int[] dx = {1, -1, 0, 0};
    private int[] dy = {0, 0, 1, -1};
    public int solution(int[,] maps) {
        int n = maps.GetLength(0);
        int m = maps.GetLength(1);
        int answer = BFS(0, 0, n, m, maps);
        
        return answer;
    }
    private int BFS(int x, int y, int n, int m, int[,] maps)
    {
        if(maps[x, y] == 0 || maps[n - 1, m - 1] == 0) return -1;
        
        int[,] dist = new int[n, m];
        Queue<(int, int)> queue = new Queue<(int, int)>();
        
        dist[0, 0] = 1;
        queue.Enqueue((x, y));
        
        while(queue.Count > 0)
        {
            var (cx, cy) = queue.Dequeue();
            for(int i = 0; i < 4; i++)
            {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && maps[nx, ny] == 1 && dist[nx, ny] == 0)
                {
                    dist[nx, ny] = dist[cx, cy] + 1;
                    queue.Enqueue((nx, ny));
                }
            }
        }
        return dist[n - 1, m - 1] == 0 ? - 1 : dist[n - 1, m - 1];
    }
}
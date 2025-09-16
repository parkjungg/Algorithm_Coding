using System;
using System.Collections.Generic;

public class Solution {
    private int[] dx = {1, -1, 0, 0};
    private int[] dy = {0, 0, 1, -1};
    public int solution(string[] maps) {
        
        int n = maps.Length;
        int m = maps[0].Length;
                
        int sX = 0; int sY = 0;
        int lX = 0; int lY = 0;
               
        for(int i = 0; i < n; i++)
        {
            for(int j = 0;  j < m; j++)
            {
                char c = maps[i][j];
                if(c == 'S') { sX = i; sY = j; }
                else if(c == 'L') { lX = i; lY = j; }
            }
        }
        
        int toLever = BFS(maps, sX, sY, 'L');
        if(toLever == -1) return -1;
        
        int toExit = BFS(maps, lX, lY, 'E');
        if(toExit == -1) return -1;
        
        return toLever + toExit;
    }
    
    private int BFS(string[] maps, int startX, int startY, char target)
    {
        int n = maps.Length;
        int m = maps[0].Length;
        bool[,] visited = new bool[n, m];
    
        Queue<(int, int, int)> q = new Queue<(int, int, int)>();
        q.Enqueue((startX, startY, 0));
        visited[startX, startY] = true;
        
        while(q.Count > 0)
        {
            var (x, y, d) = q.Dequeue();
            for(int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                
                char cell = maps[nx][ny];
                if(cell == 'X') continue;
                if(visited[nx, ny]) continue;
                if(cell == target) return d + 1;
                
                visited[nx, ny] = true;
                q.Enqueue((nx, ny, d + 1));
            }
        }
        return -1;
    }
}
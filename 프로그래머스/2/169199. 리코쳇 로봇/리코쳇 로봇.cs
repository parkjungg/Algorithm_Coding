using System;
using System.Collections.Generic;

public class Solution {
    private int[] dx = {1, -1, 0, 0};
    private int[] dy = {0, 0, 1, -1};
    private bool[,] visited;
    public int solution(string[] board) {
        int n = board.Length;
        int m = board[0].Length;
        
        int nx = 0; int ny = 0;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                char c = board[i][j];
                if(c == 'R')  { nx = i; ny = j; break; }
            }
        }
        
        visited = new bool[n, m];
        int answer = BFS(board, nx, ny, 'G');
        return answer;
    }
    private int BFS(string[] board, int startX, int startY, char target)
    {
        int n = board.Length;
        int m = board[0].Length;
        
        Queue<(int, int, int)> q = new Queue<(int, int, int)>();
        q.Enqueue((startX, startY, 0));
        visited[startX, startY] = true;
        
        while(q.Count > 0)
        {
            var (x, y, d) = q.Dequeue();
            for(int i = 0; i < 4; i++)
            {
                int cx = x;
                int cy = y;
                while(true)
                {
                    int nx = cx + dx[i];
                    int ny = cy + dy[i];
                    
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) break;
                    if(board[nx][ny] == 'D') break;
                    
                    cx = nx;
                    cy = ny;
                }
                if(visited[cx, cy]) continue;
                if(board[cx][cy] == target) return d + 1;
                
                visited[cx, cy] = true;
                q.Enqueue((cx, cy, d + 1));
            }
        }
        return -1;
    }
}
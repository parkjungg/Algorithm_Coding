using System;
using System.Collections.Generic;

public class Solution {
    private int[] dx = {1, -1, 0, 0};
    private int[] dy = {0, 0, 1, -1};
    
    public int[] solution(string[,] places) {
        int[] answer = new int[places.GetLength(0)];
        
        for(int t = 0; t < places.GetLength(0); t++)
        {
            bool isOK = true;
            string[] curRoom = new string[5];
            for(int r = 0; r < 5; r++)
            {
                curRoom[r] = places[t, r];
            }
            for(int i = 0; i < 5; i++)
            {
                for(int j = 0; j < 5; j++)
                {
                    if(curRoom[i][j] == 'P')
                    {
                        if(!BFS(i, j, curRoom))
                        {
                            isOK = false;
                            break;
                        }
                    }
                }
                if(!isOK) break;
            }
            answer[t] = isOK ? 1 : 0;
        }
        return answer;
    }
    
    private bool BFS(int x, int y, string[] p)
    {
        var q = new Queue<(int row, int col)>();
        var visited = new bool[5, 5];
        
        q.Enqueue((x, y));
        visited[x, y] = true;
        
        while(q.Count > 0)
        {
            var cur = q.Dequeue();
            int cx = cur.row;
            int cy = cur.col;
            
            for(int i = 0; i < 4; i++)
            {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                
                if(nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || visited[nx, ny])
                {
                    continue;
                }
                
                int d = Math.Abs(x - nx) + Math.Abs(y - ny);
                
                if(p[nx][ny] == 'P' && d <= 2)
                {
                    return false;
                }
                else if(p[nx][ny] == 'O' && d < 2)
                {
                    q.Enqueue((nx, ny));
                }
            }
        }
        return true;
    }
}
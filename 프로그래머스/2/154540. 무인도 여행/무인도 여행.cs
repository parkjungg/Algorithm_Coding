using System;
using System.Collections.Generic;

public class Solution {
    private static bool[,] visited;
    private static int[] dx = {1, -1, 0, 0};
    private static int[] dy = {0, 0, 1, -1};
    public int[] solution(string[] maps) {
        List<int> list = new List<int>();
        int row = maps.Length;
        int col = maps[0].Length;
        visited = new bool[row, col];
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(!visited[i, j] && maps[i][j] != 'X')
                {
                    int result = DFS(i, j, row, col, maps);
                    list.Add(result);
                }
            }
        }
        
        if(list.Count == 0) return new int[] {-1};
        list.Sort();
        return list.ToArray();
    }
    
    private static int DFS(int x, int y, int row, int col, string[] maps)
    {
        var stack = new Stack<(int, int)>();
        stack.Push((x, y));
        visited[x, y] = true;
        int size = maps[x][y] - '0';
        
        while(stack.Count > 0)
        {
            var (cx, cy) = stack.Pop();
            
            for(int i = 0; i < 4; i++)
            {
                int nx = cx + dx[i];
                int ny = cy + dy[i];
                if(nx >= 0 && nx < row && ny >= 0 && ny < col &&
                  !visited[nx, ny] && maps[nx][ny] != 'X')
                {
                    visited[nx, ny] = true;
                    size += maps[nx][ny] - '0';
                    stack.Push((nx, ny));
                }
            }
        }
        return size;
    }
}
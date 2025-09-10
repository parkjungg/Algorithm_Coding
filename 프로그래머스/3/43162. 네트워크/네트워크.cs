using System;

public class Solution {
    private bool[] visited;
    public int solution(int n, int[,] computers) {
        int answer = 0;
        visited = new bool[n];
        for(int i = 0; i < n; i++)
        {
            if(!visited[i])
            {
                DFS(i, computers);
                answer++;
            }
        }
        return answer;
    }
    
    private void DFS(int n, int[,] computers)
    {
        visited[n] = true;
        for(int i = 0; i < computers.GetLength(0); i++)
        {
            if(i != n && computers[n, i] == 1 && !visited[i])
            {
                DFS(i, computers);
            }
        }
    }
}
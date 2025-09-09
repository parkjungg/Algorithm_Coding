using System;

public class Solution {
    public bool[] visited;
    public int answer = 0;
    public int solution(int k, int[,] dungeons) {
        visited = new bool[dungeons.GetLength(0)];
        
        BackTracking(0, k, dungeons);
        return answer;
    }
    public void BackTracking(int depth, int k, int[,] dungeons)
    {
        for(int i = 0; i < dungeons.GetLength(0); i++)
        {
            if(!visited[i] && dungeons[i, 0] <= k)
            {
                visited[i] = true;
                BackTracking(depth + 1, k - dungeons[i, 1], dungeons);
                visited[i] = false;
            }
        }
        answer = Math.Max(depth, answer);
    }
}
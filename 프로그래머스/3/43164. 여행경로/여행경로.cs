using System;
using System.Collections.Generic;

public class Solution {
    private List<string> result;
    private bool[] visited;
    public string[] solution(string[,] tickets) {
        result = new List<string>();
        visited = new bool[tickets.GetLength(0)];
    
        BackTracking(tickets, 0, "ICN", "ICN");
        
        result.Sort();
    
        
        string[] answer = result[0].Split(' ');
        return answer;
    }
    
    private void BackTracking(string[,] tickets, int depth, string start, string route)
    {
        if(depth == tickets.GetLength(0))
        {
            result.Add(route);
            return;
        }
        
        for(int i = 0; i < tickets.GetLength(0); i++)
        {
            if(tickets[i, 0].Equals(start) && !visited[i])
            {
                visited[i] = true;
                BackTracking(tickets, depth + 1, tickets[i, 1], route + " " + tickets[i, 1]);
                visited[i] = false;
            }
        }
    }
}
using System;
using System.Collections.Generic;

public class Solution {
    public int solution(string begin, string target, string[] words) {
        
        var set = new HashSet<string>(words);
        if(!set.Contains(target)) return 0;
        
        bool[] visited = new bool[words.Length];
        var q = new Queue<(string word, int depth)>();
        q.Enqueue((begin, 0));
        
        while(q.Count > 0)
        {
            var (cur, depth) = q.Dequeue();
            if(cur == target) return depth;
            
            for(int i = 0; i < words.Length; i++)
            {
                if(!visited[i] && IsAdjacent(cur, words[i]))
                {
                    q.Enqueue((words[i], depth + 1));
                }
            }
        }
        return 0;
    }
    private bool IsAdjacent(string a, string b)
    {
        int diff = 0;
        for(int i = 0; i < a.Length; i++)
        {
            if(a[i] != b[i]) diff++;
            if(diff > 1) return false;
        }
        return diff == 1;
    }
}
using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int k, int[] score) {
        List<int> answer = new List<int>();
        List<int> best = new List<int>();
        
        foreach(var s in score)
        {
            best.Add(s);
            best.Sort();
            if(best.Count > k)
            {
                best.RemoveAt(0);
            }
            answer.Add(best[0]);
        }
        return answer.ToArray();
    }
}
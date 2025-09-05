using System;
using System.Linq;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] answers) {
        int[] p1 = {1, 2, 3, 4, 5};
        int[] p2 = {2, 1, 2, 3, 2, 4, 2, 5};
        int[] p3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
        
        int[] score = new int[3];
        
        for(int i = 0; i < answers.Length; i++)
        {
            if(answers[i] == p1[i % p1.Length]) score[0]++;
            if(answers[i] == p2[i % p2.Length]) score[1]++;
            if(answers[i] == p3[i % p3.Length]) score[2]++;
        }
        
        int maxScore = score.Max();
        List<int> result = new List<int>();
        for(int i = 0; i < 3; i++)
        {
            if(maxScore == score[i]) result.Add(i + 1);
        }
        score = result.ToArray();
        return score;
    }
}

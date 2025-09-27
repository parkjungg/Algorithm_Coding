using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[,] score) {
        int[] answer = new int[score.GetLength(0)]; 
        
        List<double> list = new List<double>();
        
        for(int i = 0; i < score.GetLength(0); i++)
        {
            double average = (score[i, 0] + score[i, 1]) / 2.0;
            list.Add(average);
        }
        
        for(int i = 0; i < score.GetLength(0); i++)
        {
            int rank = 1;
            for(int j = 0; j < score.GetLength(0); j++)
            {
                if(list[i] < list[j]) rank++;
            }
            answer[i] = rank;
        }
        return answer;
    }
}
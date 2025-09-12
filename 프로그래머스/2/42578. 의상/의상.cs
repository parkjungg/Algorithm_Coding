using System;
using System.Collections.Generic;

public class Solution {
    public int solution(string[,] clothes) {
        var countType = new Dictionary<string, int>();
        int row = clothes.GetLength(0);
        
        for(int i = 0; i < row; i++)
        {
            string type = clothes[i, 1];
            if(countType.ContainsKey(type)) countType[type]++;
            else countType[type] = 1;
        }
        
        int answer = 1;
        foreach(var kv in countType)
        {
            answer *= (kv.Value + 1);
        }
        answer = answer - 1;
        return answer;
    }
}
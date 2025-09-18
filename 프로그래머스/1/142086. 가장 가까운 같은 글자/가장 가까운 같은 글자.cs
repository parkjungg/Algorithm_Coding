using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string s) {
        int[] answer = new int[s.Length];
        
        Dictionary<char, int> lastIndex = new Dictionary<char, int>();
        
        for(int i = 0; i < s.Length; i++)
        {
            char c = s[i];
            if(!lastIndex.ContainsKey(c))
            {
                lastIndex[c] = i;
                answer[i] = -1;
            }
            else
            {
                answer[i] = i - lastIndex[c];
            }
            lastIndex[c] = i;
        }
        return answer;
    }
}
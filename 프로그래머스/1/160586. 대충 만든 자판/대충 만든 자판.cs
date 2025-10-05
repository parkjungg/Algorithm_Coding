using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] keymap, string[] targets) {
        int[] answer = new int[targets.Length];
        
        var key = new Dictionary<char, int>();
        
        foreach(string s in keymap)
        {
            for(int i = 0; i < s.Length; i++)
            {
                char ch = s[i];
                if(key.ContainsKey(ch))
                {
                    key[ch] = Math.Min(key[ch], i + 1);
                }
                else
                {
                    key[ch] = i + 1;
                }
            }
        }
            
            for(int i = 0; i < targets.Length; i++)
            {
                for(int j = 0; j < targets[i].Length; j++)
                {
                    char ch = targets[i][j];
                    if(!key.ContainsKey(ch))
                    {
                        answer[i] = -1;
                        break;
                    }
                    else
                    {
                        answer[i] += key[ch];
                    }
                }
            }
        return answer;
    }
}
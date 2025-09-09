using System;
using System.Collections.Generic;

public class Solution {
    public char[] words = {'A', 'E', 'I', 'O', 'U'};
    public List<string> list;
    public int solution(string word) {
        int answer = 0;
        
        list = new List<string>();
        BackTracking(0, "");
        int size = list.Count;
        for(int i = 0; i < size; i++)
        {
            if(list[i] == word)
            {
                answer = i;
                break;
            }
        }
        return answer;
    }
    
    private void BackTracking(int depth, string s)
    {
        list.Add(s);
        if(depth == 5) return;
        for(int i = 0; i < words.Length; i++)
        {
            BackTracking(depth + 1, s + words[i]);
        }
    }
}
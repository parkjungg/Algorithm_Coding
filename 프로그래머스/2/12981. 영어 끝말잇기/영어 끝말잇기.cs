using System;
using System.Collections.Generic;

class Solution
{
    private List<string> list;
    public int[] solution(int n, string[] words)
    {
        list = new List<string>();
        list.Add(words[0]);
        
        for(int i = 1; i < words.Length; i++)
        {
            if(!Check(words, i))
            {
                return new int[] {(i % n) + 1, (i / n) + 1};
            }
            else
            {
                list.Add(words[i]);
            }
        }
        return new int[] {0, 0};
    }
    
    private bool Check(string[] words, int cnt)
    {
        string s1 = words[cnt];
        string s2 = words[cnt - 1];
        if(list.Contains(words[cnt])) return false;
        if(s1[0] != s2[s2.Length - 1]) return false;
        return true;
    }
}
using System;
using System.Collections.Generic;

public class Solution {
    public int solution(string my_string, string is_suffix) {
        int answer = 0;
        List<string> list = new List<string>();
        
        for(int i = 0; i < my_string.Length; i++)
        {
            list.Add(my_string.Substring(i));
        }
        list.ToArray();
        
        if(list.Contains(is_suffix)) answer = 1;
        else answer = 0;
        return answer;
    }
}
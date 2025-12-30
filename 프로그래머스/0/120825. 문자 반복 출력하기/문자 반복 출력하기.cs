using System;

public class Solution {
    public string solution(string my_string, int n) {
        string answer = "";
        int len = my_string.Length;
        
        for(int i = 0; i < len; i++)
        {
            for(int j = 0; j < n; j++)
            {
               answer += my_string[i]; 
            }
        }
        return answer;
    }
}
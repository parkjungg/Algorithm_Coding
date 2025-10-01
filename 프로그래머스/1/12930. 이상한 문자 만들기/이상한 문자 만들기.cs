using System;
using System.Text;
public class Solution {
    public string solution(string s) {
        StringBuilder answer = new StringBuilder();
        int idx = 0;
        
        for(int i = 0; i < s.Length; i++)
        {
            if(s[i] == ' ')
            {
                answer.Append(' ');
                idx = 0;
            }
            else
            {
                if(idx % 2 == 0) answer.Append(char.ToUpper(s[i]));
                else answer.Append(char.ToLower(s[i]));
                idx++;
            }
        }
        return answer.ToString();
    }
}
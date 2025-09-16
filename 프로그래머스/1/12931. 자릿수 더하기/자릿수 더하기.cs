using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        string s = n.ToString();
        int len = s.Length;
        for(int i = 0; i < len; i++)
        {
            answer += int.Parse(s[i].ToString());
        }
        return answer;
    }
}
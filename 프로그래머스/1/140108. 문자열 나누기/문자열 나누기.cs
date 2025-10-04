using System;

public class Solution {
    public int solution(string s) {
        int answer = 0;
        int same = 0;
        int diff = 0;
        char temp = s[0];
        
        for(int i = 0; i < s.Length; i++)
        {
            if(s[i] == temp) same++;
            else diff++;
            
            if(same == diff)
            {
                answer++;
                same = 0;
                diff = 0;
                
                if(i + 1 < s.Length)
                {
                    temp = s[i + 1];
                }
            }
        }
        if(same != 0 || diff != 0) answer++;        
        
        return answer;
    }
}
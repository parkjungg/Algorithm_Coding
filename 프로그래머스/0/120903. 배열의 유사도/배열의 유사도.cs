using System;
using System.Linq;

public class Solution {
    public int solution(string[] s1, string[] s2) {
        int answer = 0;
        
        foreach(var s in s1)
        {
            if(s2.Contains(s)) answer++;
        }
        return answer;
    }
}
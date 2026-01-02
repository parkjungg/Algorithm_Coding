using System;

public class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        
        string s1 = "";
        string s2 = "";
        s1 = a.ToString() + b.ToString();
        s2 = b.ToString() + a.ToString();
        
        answer = int.Parse(s1) >= int.Parse(s2) ? int.Parse(s1) : int.Parse(s2);
        return answer;
    }
}
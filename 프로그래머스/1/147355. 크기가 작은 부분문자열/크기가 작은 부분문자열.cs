using System;

public class Solution {
    public int solution(string t, string p) {
        int answer = 0;
        int len = t.Length - p.Length + 1;
        long pNum = long.Parse(p);
        for(int i = 0; i < len; i++)
        {
            string temp = t.Substring(i, p.Length);
            if(long.Parse(temp) <= pNum)
            {
                answer++;
            }
        }
        return answer;
    }
}
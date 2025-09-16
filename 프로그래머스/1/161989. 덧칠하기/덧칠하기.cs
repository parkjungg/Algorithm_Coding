using System;

public class Solution {
    public int solution(int n, int m, int[] section) {
        int answer = 0;
        int len = section.Length;
        int end = 0;
        
        for(int i = 0; i < len; i ++)
        {
            if(section[i] > end)
            {
                answer++;
                end = section[i] + m - 1;
            }
        }
        return answer;
    }
}
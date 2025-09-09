using System;

public class Solution {
    public int solution(int[] d, int budget) {
        Array.Sort(d);
        int sum = 0;
        int answer = 0;
        
        foreach(var v in d)
        {
            if(sum + v > budget) break;
            sum += v;
            answer++;           
        }
        return answer;
    }
}
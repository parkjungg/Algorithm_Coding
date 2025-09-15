using System;

public class Solution {
    private int answer = 0;
    public int solution(int[] number) {
        BackTracking(0, 0, 0, number);
        return answer;
    }
    
    private void BackTracking(int start, int depth, int sum, int[] number)
    {
        if(depth == 3)
        {
            if(sum == 0)
            {
                answer++;
                return;
            }
        }
        for(int i = start; i < number.Length; i++)
        {
            sum += number[i];
            BackTracking(i + 1, depth + 1, sum, number);
            sum -= number[i];
        }        
    }
}
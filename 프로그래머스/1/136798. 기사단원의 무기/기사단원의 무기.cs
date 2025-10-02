using System;

public class Solution {
    public int solution(int number, int limit, int power) {
        int answer = 0;
        int[] arr = new int[number + 1];
        
        for(int i = 1; i <= number; i++)
        {
            int cnt = 0;
            int r = (int)Math.Sqrt(i);
            for(int j = 1; j <= r; j++)
            {
                if(i % j == 0)
                {
                    int k = i / j;
                    cnt += (j == k) ? 1 : 2;
                }
            }
            arr[i] = cnt;
        }
        foreach(int i in arr)
        {
            if(i > limit) answer += power;
            else answer += i;
        }
        return answer;
    }
}
using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        int idx = 1;
        while(true)
        {
            if(n % idx == 1)
            {
                answer = idx;
                break;
            }
            idx++;
        }
        return answer;
    }
}
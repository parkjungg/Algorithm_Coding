using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        bool isEven = true;
        
        if(n % 2 != 0) isEven = false;
        
        if(isEven)
        {
            for(int i = 0; i <= n; i+=2)
            {
                answer += i * i;
            }
        }
        else
        {
            for(int i = 1; i <= n; i+=2)
            {
                answer += i;
            }
        }
        return answer;
    }
}
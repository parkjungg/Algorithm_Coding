using System;


public class Solution {
    public int solution(int n) {
        int answer = 0;
        for(int i = 1; i <= n; i++)
        {
            if(IsPrime(i))
            {
                answer++;
            }
        }
        return answer;
    }
    
    private bool IsPrime(int n)
    {
        if(n == 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        int d = (int)Math.Sqrt(n);
        
        for(int i = 3; i <= d; i+=2)
        {
            if(n % i == 0) return false; 
        }
        return true;
    }
}
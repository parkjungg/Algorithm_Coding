using System;

public class Solution {
    public int solution(int n, int k) {
        int answer = 0;
        string s = "";
            
        while(n != 0)
        {
            s = n % k + s;
            n /= k;
        }
        string[] arr = s.Split("0");
        
        for(int i = 0; i < arr.Length; i++)
        {
            if(arr[i].Equals("")) continue;
            long num = long.Parse(arr[i]);
            if(IsPrime(num))
            {
                answer++;
            }
        }
        return answer;
    }
    
    private bool IsPrime(long n)
    {
        if(n == 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        
        long d = (long)Math.Sqrt(n);
        for(long i = 3; i <= d; i+=2)
        {
            if(n % i == 0) return false;
        }
        return true;
    }
}
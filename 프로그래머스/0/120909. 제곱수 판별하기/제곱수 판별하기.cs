using System;

public class Solution {
    public int solution(int n) {
        int answer = 0;
        
        int num = (int)Math.Sqrt(n);
        if(num * num == n) answer = 1;
        else answer = 2;
        
        return answer;
    }
}
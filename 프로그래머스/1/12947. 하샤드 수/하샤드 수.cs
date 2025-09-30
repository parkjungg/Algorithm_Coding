using System;

public class Solution {
    public bool solution(int x) {
        bool answer = true;
        int temp = x;
        int sum = 0;
        while(x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        if(temp % sum != 0) answer = false;
        return answer;
    }
}
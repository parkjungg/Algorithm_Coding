using System;

public class Solution {
    public int solution(int slice, int n) {
        int answer = 0;
        
        while(n != 0)
        {
            if(n < slice)
            {
                answer++;
                break;
            }
            if(n % slice == 0)
            {
                answer += n / slice;
                break;
            }
            else
            {
                answer += n / slice;
                n = n % slice;
            }
        }
        return answer;
    }
}
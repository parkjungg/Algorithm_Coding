using System;

class Solution
{
    public int solution(int n, int a, int b)
    {
        int answer = 0;
        while(true)
        {
            a = a / 2 + a % 2;
            b = b / 2 + b % 2;
            answer++;
            if(a == b)
            {
                break;
            }
        }
        
        return answer;
    }
}

// 2 3 -> 안만남
// 1 2 -> 만남

// 2로 나누었을때 나머지
// 0 1 -> 안만남
// 1 0 -> 만남

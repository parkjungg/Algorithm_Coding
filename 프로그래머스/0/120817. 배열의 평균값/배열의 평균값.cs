using System;

public class Solution {
    public double solution(int[] numbers) {
        double answer = 0;
        foreach(var i in numbers)
        {
            answer += i;
        }
        answer /= numbers.Length;
        return answer;
    }
}
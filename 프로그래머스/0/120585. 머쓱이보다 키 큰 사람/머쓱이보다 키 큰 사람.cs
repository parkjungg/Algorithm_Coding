using System;

public class Solution {
    public int solution(int[] array, int height) {
        int answer = 0;
        foreach(var heights in array)
        {
            if(heights > height) answer++;
        }
        return answer;
    }
}
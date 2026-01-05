using System;

public class Solution {
    public int solution(int[] array, int n) {
        int answer = 0;
        foreach(var i in array)
        {
            if(i == n) answer++;
        }
        return answer;
    }
}
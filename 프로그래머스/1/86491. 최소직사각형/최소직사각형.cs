using System;

public class Solution {
    public int solution(int[,] sizes) {
        int answer = 0;
        int maxW = 0; int maxH = 0;

        for(int i = 0; i < sizes.GetLength(0); i++)
        {
            int big = Math.Max(sizes[i, 0], sizes[i, 1]);
            int small = Math.Min(sizes[i, 0], sizes[i, 1]);
            maxW = Math.Max(big, maxW);
            maxH = Math.Max(small, maxH);
        }
        answer = maxW * maxH;
        return answer;
    }
}
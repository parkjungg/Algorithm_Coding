using System;

public class Solution {
    public int solution(int n, int t) {
        int i = 1;
        while(i <= t)
        {
            n *= 2;
            i++;
        }
        return n;
    }
}
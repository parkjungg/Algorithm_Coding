using System;

public class Solution {
    public int solution(int num, int k) {
        string s = num.ToString();
        for(int i = 0; i < s.Length; i++)
        {
            if(int.Parse(s[i].ToString()) == k) return i + 1;
        }
        return -1;
    }
}
using System;
using System.Text;

public class Solution {
    public string solution(string X, string Y) {
        int[] xArr = new int[10];
        int[] yArr = new int[10];
        StringBuilder sb = new StringBuilder();
        
        foreach(char ch in X) xArr[ch - '0']++;
        foreach(char ch in Y) yArr[ch - '0']++;
        
        for(int i = 9; i >= 0; i--)
        {
            int k = Math.Min(xArr[i], yArr[i]);
            if(k > 0)
            {
                sb.Append(new string((char)(i + '0'), k));
            }
        }
        
        if(sb.Length == 0) return "-1";
        if(sb[0] == '0') return "0";
        return sb.ToString();
    }
}
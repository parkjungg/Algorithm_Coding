using System;
using System.Text;
using System.Collections.Generic;

public class Solution {
    public string solution(string s, string skip, int index) {
        var skipSet = new HashSet<char>(skip);
        var sb = new StringBuilder();
        
        int allowedCount = 26 - skipSet.Count;
        int step = index % allowedCount;
        
        foreach(char c in s)
        {
            char cur = c;
            int moved = 0;
            while(moved < step)
            {
                cur = (char)((((cur - 'a') + 1) % 26) + 'a');
                if(skipSet.Contains(cur)) continue;
                moved++;
            }
            sb.Append(cur);
        }
        return sb.ToString();
    }
}
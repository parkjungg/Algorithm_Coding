using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string s) {
        int count = 0;
        int zeroCnt = 0;
        
        while(!s.Equals("1"))
        {
            int ones = 0;
            foreach(char ch in s)
            {
                if(ch == '1') ones++;
                else zeroCnt++;
            }
            s = Convert.ToString(ones, 2);
            count++;
        }
        
        return new int[] {count, zeroCnt};
    }
}
using System.Collections.Generic;
using System;
public class Solution {
    public int[] solution(long n) {
        List<int> list = new List<int>();
    
        
        while(n > 0)
        {
            int result = (int)(n % 10);
            list.Add(result);
            n /= 10;
        }    
        
        return list.ToArray();
    }
}
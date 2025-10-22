using System;
using System.Collections.Generic;

public class Solution {
    public long solution(int[] weights) {
        long answer = 0;
        
        Array.Sort(weights);
        
        var db = new Dictionary<double, long>();
        
        foreach(var w in weights)
        {
            if(db.ContainsKey(w)) answer += db[w];
            
            if((w * 2) % 3 == 0)
            {
                int target = (w * 2) / 3;
                if(db.ContainsKey(target)) answer += db[target];
            }
            
            if(w % 2 == 0)
            {
                int target = w / 2;
                if(db.ContainsKey(target)) answer += db[target];
            }
            
            if((w * 3) % 4 == 0)
            {
                int target = (w * 3) / 4;
                if(db.ContainsKey(target)) answer += db[target];
            }
            
            if(db.ContainsKey(w)) db[w]++;
            else db[w] = 1;
        }
        return answer;
    }
}
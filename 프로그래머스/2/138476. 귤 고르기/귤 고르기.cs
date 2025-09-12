using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(int k, int[] tangerine) {
        var counts = new Dictionary<int, int>();
        foreach(var size in tangerine)
        {
            if(counts.ContainsKey(size)) counts[size]++;
            else counts[size] = 1;
        }
        
        var sortedCounts = counts.Values.OrderByDescending(x => x);
        
        int usedKinds = 0;
        int taken = 0;
        foreach(var c in sortedCounts)
        {
            taken += c;
            usedKinds++;
            if(taken >= k) break;
        }
        return usedKinds;
        
    }
}

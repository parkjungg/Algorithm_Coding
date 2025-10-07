using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] elements) {
        HashSet<int> set = new HashSet<int>();
        int n = elements.Length;
        
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                sum += elements[(i + j) % n];
                set.Add(sum);
            }
        }
        return set.Count;
    }
}
using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(int[] numbers) {
        var hash = new HashSet<int>();
        
        for(int i = 0; i < numbers.Length; i++)
        {
            for(int j = i + 1; j < numbers.Length; j++)
            {
                hash.Add(numbers[i] + numbers[j]);
            }
        }
        int[] arr = hash.ToArray();
        Array.Sort(arr);
        return arr;
    }
}
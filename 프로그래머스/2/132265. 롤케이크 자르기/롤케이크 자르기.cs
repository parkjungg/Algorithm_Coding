using System;
using System.Collections.Generic;
public class Solution {
    public int solution(int[] topping) {
        int answer = 0;
        int n = topping.Length;
        int[] left = new int[n];
        int[] right = new int[n];
        
        HashSet<int> set = new HashSet<int>();
        
        for(int i = 0; i < n; i++)
        {
            set.Add(topping[i]);
            left[i] = set.Count;
        }
        
        set.Clear();
        
        for(int i = n - 1; i >= 0; i--)
        {
            set.Add(topping[i]);
            right[i] = set.Count;
        }
        
        for(int i = 0; i < n - 1; i++)
        {
            if(left[i] == right[i + 1]) answer++;
        }
        
        return answer;
    }
}

// 자르고 hash에 넣고 카운트 같으면 answer++
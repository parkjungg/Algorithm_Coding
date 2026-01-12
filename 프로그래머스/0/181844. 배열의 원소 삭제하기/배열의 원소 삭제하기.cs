using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(int[] arr, int[] delete_list) {
        List<int> list = new List<int>();
        for(int i = 0; i < arr.Length; i++)
        {
            if(!delete_list.Contains(arr[i])) list.Add(arr[i]);
        }
        
        return list.ToArray();
    }
}
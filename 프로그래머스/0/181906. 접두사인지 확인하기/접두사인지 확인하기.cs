using System;
using System.Linq;

public class Solution {
    public int solution(string my_string, string is_prefix) {
        string[] arr = new string[my_string.Length];
        
        for(int i = 0; i < my_string.Length; i++)
        {
            arr[i] = my_string.Substring(0, i);
        }
        
        return arr.Contains(is_prefix) ? 1 : 0;
    }
}
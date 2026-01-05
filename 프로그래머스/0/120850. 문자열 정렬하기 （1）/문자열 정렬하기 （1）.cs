using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string my_string) {
        List<int> list = new List<int>();
        
        for(int i = 0; i < my_string.Length; i++)
        {
            if(char.IsDigit(my_string[i]))
            {
                list.Add(int.Parse(my_string[i].ToString()));
            }
        }
        list.Sort();
        return list.ToArray();
    }
}
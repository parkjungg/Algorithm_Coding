using System;

public class Solution {
    public string solution(string my_string, string alp) {
        char[] arr = my_string.ToCharArray();
        
        for(int i = 0; i < arr.Length; i++)
        {
            if(alp[0] == arr[i])
            {
                arr[i] = char.ToUpper(arr[i]);
            }
        }
        return new string(arr);
    }
}
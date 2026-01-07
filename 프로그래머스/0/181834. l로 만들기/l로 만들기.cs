using System;

public class Solution {
    public string solution(string myString) {
        char[] arr = myString.ToCharArray();
        for(int i = 0; i < arr.Length; i++)
        {
            if(arr[i] < 'l')
            {
                arr[i] = 'l';
            }
        }
        return new string(arr);
    }
}
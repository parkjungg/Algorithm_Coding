using System;

public class Solution {
    public string solution(string my_string, int num1, int num2) {
        char[] arr = my_string.ToCharArray();
        
        char temp = arr[num1];
        arr[num1] = arr[num2];
        arr[num2] = temp;
        
        return new string(arr);
    }
}
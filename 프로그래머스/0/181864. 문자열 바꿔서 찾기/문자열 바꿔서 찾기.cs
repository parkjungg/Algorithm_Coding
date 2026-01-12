using System;

public class Solution {
    public int solution(string myString, string pat) {
        char[] arr = myString.ToCharArray();
        for(int i = 0; i < arr.Length; i++)
        {
            if(arr[i] == 'A') arr[i] = 'B';
            else arr[i] = 'A';
        }
        string answer = new string(arr);
        return answer.Contains(pat) ? 1 : 0;
    }
}
using System;
using System.Linq;

public class Solution {
    public string solution(int[] numbers) {
        string answer = "";
        
        string[] arr = new string[numbers.Length];
        for(int i = 0; i < numbers.Length; i++)
        {
            arr[i] = numbers[i].ToString();
        }
        
        Array.Sort(arr, (a, b) => string.Compare(b + a, a + b));
        
        if(arr[0] == "0") return "0";
        
        answer = string.Concat(arr);         
        
        return answer;
    }
}
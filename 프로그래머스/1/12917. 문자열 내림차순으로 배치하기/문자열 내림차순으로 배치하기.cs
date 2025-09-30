using System;
public class Solution {
    public string solution(string s) {
        char[] arr = s.ToCharArray();
        Array.Sort(arr, (a, b) => b.CompareTo(a));
        string answer = new string(arr);
        
        return answer;
    }
}
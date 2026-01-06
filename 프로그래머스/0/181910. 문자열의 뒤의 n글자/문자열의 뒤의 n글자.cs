using System;

public class Solution {
    public string solution(string my_string, int n) {
        int len = my_string.Length;
        return my_string.Substring(len - n, n);
    }
}
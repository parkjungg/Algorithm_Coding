using System;

public class Solution {
    public string solution(string n_str) {
        if(n_str[0] != '0') return n_str;
        
        n_str = n_str.TrimStart('0');
        return n_str;
    }
}
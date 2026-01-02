using System;

public class Solution {
    public int solution(int a, int b) {        
        string s = "";
        int sum = 2 * a * b;
        
        s = a.ToString() + b.ToString();
        
        if(sum > int.Parse(s)) return sum;
        else return int.Parse(s);
    }
}
using System;
using System.Text;

public class Solution {
    public string solution(string number, int k) {
        var sb = new StringBuilder(number.Length);
        
        foreach(char c in number)
        {
            while(k > 0 && sb.Length > 0 && sb[sb.Length - 1] < c)
            {
                sb.Length--;
                k--;
            }
            sb.Append(c);
        }
        
        if(k > 0)
        {
            sb.Length -= k;
        }
        return sb.ToString();
    }
}



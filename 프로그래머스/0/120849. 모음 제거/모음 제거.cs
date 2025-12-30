using System;

public class Solution {
    public string solution(string my_string) {
        string answer = my_string;
        string[] arr = new string[5] {"a", "e", "i", "o", "u"};
        
        foreach(var c in arr)
        {
            answer = answer.Replace(c, "");
        }
        return answer;
    }
}
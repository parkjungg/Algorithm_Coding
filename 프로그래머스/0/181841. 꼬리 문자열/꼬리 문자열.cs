using System;

public class Solution {
    public string solution(string[] str_list, string ex) {
        string answer = "";
        foreach(var s in str_list)
        {
            if(!s.Contains(ex)) answer += s;
        }
        return answer;
    }
}
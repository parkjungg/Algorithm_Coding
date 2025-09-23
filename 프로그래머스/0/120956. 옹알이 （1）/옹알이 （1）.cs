using System;

public class Solution {
    public int solution(string[] babbling) {
        int answer = 0;
        string[] words = {"aya", "ye", "woo", "ma"};
        foreach(var s in babbling)
        {
            string temp = s;
            foreach(var word in words)
            {
                temp = temp.Replace(word, " ");
            }
            if(temp.Trim().Length == 0) answer++;
        }
        return answer;
    }
}
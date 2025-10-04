using System;

public class Solution {
    public int solution(string[] babbling) {
        int answer = 0;
        string[] words = {"aya", "ye", "woo", "ma"};
        string temp = "";
        foreach(var s in babbling)
        {
            string cur = s;
            bool isOK = true;
            foreach(var word in words)
            {
                if(cur.Contains(word + word)) isOK = false;
                cur = cur.Replace(word, " ");
            }
            if(!isOK) continue;
            if(cur.Trim().Length == 0) answer++;
        }
        return answer;
    }
}
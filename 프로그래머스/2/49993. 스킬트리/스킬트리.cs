using System;

public class Solution {
    public int solution(string skill, string[] skill_trees) {
        int answer = 0;
        
        foreach(var tree in skill_trees)
        {
            int expected = 0;
            bool isOk = true;
            
            foreach(char c in tree)
            {
                int idx = skill.IndexOf(c);
                if(idx == -1) continue;
                if(idx == expected) expected++;
                else
                {
                    isOk = false; break;    
                }
            }
            if(isOk) answer++;
        }
        return answer;
    }
}
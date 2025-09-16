using System;

public class Solution {
    public string solution(string[] cards1, string[] cards2, string[] goal) {
        string answer = "";
        
        int card1Idx = 0;
        int card2Idx = 0;
        bool isOk = true;
        
        for(int i = 0; i < goal.Length; i++)
        {
            
            if(cards1[card1Idx].Equals(goal[i]))
            {
                if(card1Idx < cards1.Length - 1)
                {
                    card1Idx++;                    
                }
            }            
            else if(cards2[card2Idx].Equals(goal[i]))
            {
               if(card2Idx < cards2.Length - 1)
                {
                    card2Idx++;                    
                } 
            }
            else { isOk = false; break; }
        }
        
        if(isOk) answer = "Yes";
        else answer = "No";
        
        return answer;
    }
}
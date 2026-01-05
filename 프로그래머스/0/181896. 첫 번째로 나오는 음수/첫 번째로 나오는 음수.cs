using System;

public class Solution {
    public int solution(int[] num_list) {
        int answer = 0;
        bool isExist = false;
        foreach(var i in num_list)
        {
            if(i < 0)
            {
                isExist = true;
                break;
            }
            else answer++;
        }
            
        return isExist ? answer : -1;
    }
}
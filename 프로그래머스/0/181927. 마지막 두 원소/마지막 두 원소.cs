using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(int[] num_list) {
        List<int> answer = new List<int>(num_list);
        
        if(answer[answer.Count - 1] > answer[answer.Count - 2])
        {
            answer.Add(answer[answer.Count - 1] - answer[answer.Count - 2]);
        }
        else
        {
            answer.Add(answer[answer.Count - 1] * 2);
        }
        return answer.ToArray();
    }
}
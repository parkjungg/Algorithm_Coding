using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int bridge_length, int weight, int[] truck_weights) {
        int answer = 0;
        int sum = 0;
        
        Queue<int> q = new Queue<int>();
        
        for(int i = 0; i < bridge_length; i++)
        {
            q.Enqueue(0);
        }
        
        int idx = 0;
        
        while(idx < truck_weights.Length)
        {
            answer++;
            sum -= q.Dequeue();
            
            if(sum + truck_weights[idx] <= weight)
            {
                q.Enqueue(truck_weights[idx]);
                sum += truck_weights[idx];
                idx++;
            }
            else
            {
                q.Enqueue(0);
            }
        }
        answer += bridge_length;
        
        
        
        return answer;
    }
}
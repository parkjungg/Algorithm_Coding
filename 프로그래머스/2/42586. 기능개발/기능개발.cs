using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        var answer = new List<int>();
        Queue<int> queue = new Queue<int>();
        
        for(int i = 0; i < progresses.Length; i++)
        {
            int remain = 100 - progresses[i];
            int days = (remain + speeds[i] - 1) / speeds[i];
            queue.Enqueue(days);
        }
        int idx = 0;
        while(queue.Count > 0)
        {
            int cur = queue.Dequeue();
            int count = 1;
            while(queue.Count > 0 && queue.Peek() <= cur)
            {
                queue.Dequeue();
                count++;
            }
            answer.Add(count);
        }
        return answer.ToArray();
    }
}
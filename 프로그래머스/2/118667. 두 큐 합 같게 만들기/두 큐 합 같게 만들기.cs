using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] queue1, int[] queue2) {
        int answer = 0;
        var q1 = new Queue<int>(queue1);
        var q2 = new Queue<int>(queue2);
        
        long sum1 = 0, sum2 = 0;
        foreach (var i in queue1) sum1 += i;
        foreach (var i in queue2) sum2 += i;
        
        long target = (sum1 + sum2) / 2;
        int limit = (queue1.Length + queue2.Length) * 2;
        
        while(answer <= limit && sum1 != target)
        {
            if(sum1 > target)
            {
                if(q1.Count == 0) return -1;
                int v = q1.Dequeue();
                sum1 -= v;
                q2.Enqueue(v);
            }
            else
            {
                if(q2.Count == 0) return -1;
                int v = q2.Dequeue();
                sum1 += v;
                q1.Enqueue(v);
            }
            answer++;
        }
        return sum1 == target ? answer : -1;
    }
}

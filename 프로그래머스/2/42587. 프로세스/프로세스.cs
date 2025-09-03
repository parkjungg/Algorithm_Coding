using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(int[] priorities, int location) {
        int answer = 0;
        Queue<(int, int)> q = new Queue<(int, int)>();
        
        int idx = 0;
        foreach(var i in priorities)
        {
            q.Enqueue((idx++, i));
        }
        
        while(true)
        {
            var max = q.Max(x => x.Item2);
            var cur = q.Dequeue();
            if(cur.Item2 == max)
            {
                answer++;
                if(cur.Item1 == location)
                {
                    return answer;
                }
            }
            else
            {
                q.Enqueue(cur);
            }
        }
        return answer;
    }
}
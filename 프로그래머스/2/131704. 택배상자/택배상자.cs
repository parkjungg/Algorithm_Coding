using System;
using System.Collections.Generic;

public class Solution {
    public int solution(int[] order) {
        int answer = 0;
        var stack = new Stack<int>();
        int n = order.Length;
        int cur = 1;
        
        foreach(int target in order)
        {
            while(cur <= n && (stack.Count == 0 || stack.Peek() != target))
            {
                stack.Push(cur++);
            }
            if(stack.Count > 0 && stack.Peek() == target)
            {
                stack.Pop();
                answer++;
            }
            else break;
        }
        return answer;
    }
}
using System;
using System.Collections.Generic;
using System.Linq;

public class Solution {
    public int solution(int[] ingredient) {
        int answer = 0;
        Stack<int> stack = new Stack<int>();
        int n = ingredient.Length;
        
        for(int i = 0; i < n; i++)
        {
            stack.Push(ingredient[i]);
            if(stack.Count >= 4)
            {
                int a = stack.Pop();
                int b = stack.Pop();
                int c = stack.Pop();
                int d = stack.Pop();
                if(d == 1 && c == 2 && b == 3 && a == 1)
                {
                    answer++;
                }
                else{
                    stack.Push(d);
                    stack.Push(c);
                    stack.Push(b);
                    stack.Push(a);
                }
            }
        }
        return answer;
    }
}
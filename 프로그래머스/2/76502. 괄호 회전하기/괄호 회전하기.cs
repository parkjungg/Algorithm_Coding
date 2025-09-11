using System;
using System.Collections.Generic;

public class Solution {
    public int solution(string s) {
        int answer = 0;
                
        for(int i = 0; i < s.Length; i++)
        {
            if(CheckCorrect(s))
            {
                answer++;
            }
            s = Shift(s);
        }
        return answer;
    }
    private bool CheckCorrect(string s)
    {
        Stack<char> stack = new Stack<char>();
        
        for(int i = 0; i < s.Length; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stack.Push(s[i]);                              
            }
            else
            {
                if(stack.Count == 0) return false;
                
                if(stack.Peek() == '(' && s[i] == ')')
                {
                    stack.Pop();
                }
                else if(stack.Peek() == '[' && s[i] == ']')
                {
                    stack.Pop();
                }
                else if(stack.Peek() == '{' && s[i] == '}')
                {
                    stack.Pop();
                }
                else return false;
            }
        }
        return stack.Count == 0;
    }
               
    
    private string Shift(string s)
    {
        return s.Substring(1) + s[0];
    }
}
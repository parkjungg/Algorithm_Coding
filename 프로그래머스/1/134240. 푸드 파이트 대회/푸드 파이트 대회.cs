using System;
using System.Collections.Generic;
using System.Text;

public class Solution {
    public string solution(int[] food) {
        StringBuilder answer = new StringBuilder();
        LinkedList<int> deque = new LinkedList<int>();
        
        deque.AddFirst(0);
        int num = food.Length - 1;

        for(int i = food.Length - 1; i >= 1; i--)
        {
            if(food[i] == 1)
            {
                num--;
                continue;
            }
            int count = food[i] / 2;
            for(int j = 0; j < count; j++)
            {
                deque.AddFirst(num);
                deque.AddLast(num);
            }
            num--;
        }
        while(deque.Count > 0 )
        {
            int temp = deque.First.Value;
            deque.RemoveFirst();
            answer.Append(temp);
        }
        return answer.ToString();
    }
}
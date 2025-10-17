using System;

public class Solution {
    public int[] solution(int[] sequence, int k) {
        int[] answer = new int[2];
        
        int left = 0;
        int right = 0;
        
        int sum = 0;
        int size = sequence.Length;
        
        for(int i = right; i < sequence.Length; i++)
        {
            sum += sequence[i];
            while(right < sequence.Length && sum > k)
            {
                sum -= sequence[left];
                left++;
            }
            
            if(sum == k)
            {
                if(size > i - left)
                {
                    size = i - left;
                    answer[0] = left;
                    answer[1] = i;
                }
            }
        }
        return answer;
    }
}
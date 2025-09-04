using System;

public class Solution {
    public int[] solution(int[] array, int[,] commands) {
        int n = commands.GetLength(0);
        int[] answer = new int[n];
        
        for(int t = 0; t < n; t++)
        {
            int i = commands[t, 0];
            int j = commands[t, 1];
            int k = commands[t, 2];
            int len = j - i + 1;
            int[] arr = new int[len];
            
            for(int x = 0; x < len; x++)
            {
                arr[x] = array[i - 1];
                i++;
            }
            Array.Sort(arr);
            answer[t] = arr[k - 1];
        }
        return answer;
    }
}
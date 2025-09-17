using System;

public class Solution {
    int[] answer = new int[2];
    public int[] solution(int[,] arr) {
        Quad(arr, 0, 0, arr.GetLength(0));
        return answer;
    }
    
    private void Quad(int[,] arr, int x, int y, int size)
    {
        if(Zip(arr, x, y, size, arr[x, y]))
        {
            if(arr[x, y] == 1)
                answer[1]++;
            else answer[0]++;
            return;
        }
        Quad(arr, x, y, size / 2);
        Quad(arr, x, y + size / 2, size / 2);
        Quad(arr, x + size / 2, y, size / 2);
        Quad(arr, x + size / 2, y + size / 2, size / 2);
    }
    
    private bool Zip(int[,] arr, int x, int y, int size, int val)
    {
        for(int i = x; i < size + x; i++)
        {
            for(int j = y; j < size + y; j++)
            {
                if(arr[i, j] != val)
                    return false;
            }
        }
        return true;
    }
}
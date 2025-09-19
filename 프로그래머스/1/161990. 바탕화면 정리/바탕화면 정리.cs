using System;

public class Solution {
    public int[] solution(string[] wallpaper) {
        int top = int.MaxValue;
        int left = int.MaxValue;
        int down = int.MinValue;
        int right = int.MinValue;
        
        for(int i = 0; i < wallpaper.Length; i++)
        {
            for(int j = 0; j < wallpaper[0].Length; j++)
            {
                if(wallpaper[i][j] == '#')
                {
                    top = Math.Min(top, i);
                    left = Math.Min(left, j);
                    down = Math.Max(down, i + 1);
                    right = Math.Max(right, j + 1);
                }
            }
        }
        return new int[] {top, left, down, right};
    }
}
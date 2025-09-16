using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] park, string[] routes) {
        int n = park.Length;
        int m = park[0].Length;
        
        int sX = 0; int sY = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                char c = park[i][j];
                if(c == 'S')
                {
                    sX = i;
                    sY = j;
                    break;
                }
            }
        }
        
        var dx = new Dictionary<string, int> { ["N"] = -1, ["S"] = 1, ["W"] = 0, ["E"] = 0 };
        var dy = new Dictionary<string, int> { ["N"] = 0, ["S"] = 0, ["W"] = -1, ["E"] = 1 }; 
        
        foreach(var route in routes)
        {
            var parts = route.Split(' ');
            string d = parts[0];
            int dist = int.Parse(parts[1]);
            
            int nx = sX;
            int ny = sY;
            bool isOK = true;
            for(int i = 0; i < dist; i++)
            {
                nx += dx[d];
                ny += dy[d];
                
                if(nx < 0 || nx >= n || ny < 0 || ny >= m || park[nx][ny] == 'X')
                {
                    isOK = false;
                    break;
                }
            }
            if(isOK) {
                sX = nx;
                sY = ny;
            }
        }
        return new int[] {sX, sY};
    }
}
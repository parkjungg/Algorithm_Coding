using System;

public class Solution {
    private int[] dx = {1, -1, 0, 0};
    private int[] dy = {0, 0, 1, -1};
    public int solution(string dirs) {
        bool[,,] visited = new bool[11, 11, 4];
        
        int x = 5; int y = 5; int d = 0;
        int answer = 0;
        
        foreach(char c in dirs.ToCharArray())
        {
            int opposite_d = 0;

            if(c == 'R') { d = 0; opposite_d = 1; }
            if(c == 'L') { d = 1; opposite_d = 0; }
            if(c == 'D') { d = 2; opposite_d = 3; }
            if(c == 'U') { d = 3; opposite_d = 2; }
            
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx < 0 || nx >= 11 || ny < 0 || ny >= 11) continue;

            if(!visited[x, y, d])
            {
                visited[x, y, d] = true;
                visited[nx, ny, opposite_d ] = true;
                answer++;
            }
            x = nx;
            y = ny;
        }
        return answer;
    }
}
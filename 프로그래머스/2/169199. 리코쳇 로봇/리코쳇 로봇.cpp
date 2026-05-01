#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int visited[101][101];

int sy, sx, x, y;

int solution(vector<string> board) {
    
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[0].size(); j++)
        {
            if(board[i][j] == 'R')
            {
                sy = i;
                sx = j;
            }
        }
    }
    
    queue<pair<int, int>> q;
    int cnt = 0;
    
    q.push({sy, sx});
    visited[sy][sx] = 1;
    
    while(q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        
        if(board[y][x] == 'G') return visited[y][x] - 1;
        
        for(int i = 0; i < 4; i++)
        {
            int ny = y;
            int nx = x;
            
            while(true)
            {
                int ty = ny + dy[i];
                int tx = nx + dx[i];
                
                if(ty < 0 || tx < 0 || ty >= board.size() || tx >= board[0].size() )
                    break;
                if(board[ty][tx] == 'D') break;
                
                ny = ty;
                nx = tx;
            }
            if(!visited[ny][nx])
            {
                visited[ny][nx] = visited[y][x] + 1;
                q.push({ny, nx});
            }
        }
    }   
    
    return -1;
}
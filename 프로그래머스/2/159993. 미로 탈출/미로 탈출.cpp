#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int visited[101][101];

int bfs(int sy, int sx, int ey, int ex, vector<string> maps)
{
    memset(visited, 0, sizeof(visited));
    
    queue<pair<int, int>> q;
    q.push({sy, sx});
    visited[sy][sx] = 1;
    
    while(q.size())
    {
        auto cur = q.front();
        q.pop();
        
        int y = cur.first;
        int x = cur.second;
        
        if(y == ey && x == ex)
            return visited[y][x] - 1;
        
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= maps.size() || nx >= maps[0].size())
                continue;
            
            if(visited[ny][nx] || maps[ny][nx] == 'X')
                continue;
            
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return -1;
}

int solution(vector<string> maps) {
    int sy, sx, ly, lx, ey, ex;
    
    for(int i = 0; i < maps.size(); i++)
    {
        for(int j = 0; j < maps[i].size(); j++)
        {
            if(maps[i][j] == 'S') sy = i, sx = j;
            else if(maps[i][j] == 'L') ly = i, lx = j;
            else if(maps[i][j] == 'E') ey = i, ex = j;
        }
    }
    
    int a = bfs(sy, sx, ly, lx, maps);
    if(a == -1) return -1;
    
    int b = bfs(ly, lx, ey, ex, maps);
    if(b == -1) return -1;
    
    return a + b;
}

// 먼저 start 지점에서 레버까지 최단거리로 이동후, exit로 최단거리로 이동
// 레버까지 이동후 visited 배열 초기화 필요
// bfs 사용(queue)
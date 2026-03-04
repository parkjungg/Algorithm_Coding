#include<vector>
#include<bits/stdc++.h>
using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int y, x;
int solution(vector<vector<int>> maps)
{
    int n = maps.size();
    int m = maps[0].size();
    int visited[n][m];
    
    memset(visited, 0, sizeof(visited));
    
    queue<pair<int, int>> q;
    q.push({0, 0});
    visited[0][0] = 1;
    
    while(q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m || maps[ny][nx] == 0) continue;
            if(visited[ny][nx]) continue;
            
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return visited[n - 1][m - 1] == 0 ? -1 : visited[n - 1][m - 1];
}
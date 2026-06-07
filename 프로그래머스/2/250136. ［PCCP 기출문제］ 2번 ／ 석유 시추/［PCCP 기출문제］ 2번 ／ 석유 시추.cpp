#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int visited[501][501];

int cnt, n, m;
set<int> cols;

void dfs(int y, int x, vector<vector<int>> &land)
{
    visited[y][x] = 1;
    
    cnt++;
    cols.insert(x);
    
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
        if(visited[ny][nx]) continue;
        if(land[ny][nx] == 0) continue;
        
        dfs(ny, nx, land);
    }
}

int solution(vector<vector<int>> land) {
    n = land.size();
    m = land[0].size();
    
    vector<int> v(m, 0);
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(land[i][j] == 1 && !visited[i][j])
            {
                cnt = 0;
                cols.clear();
                
                dfs(i, j, land);
                
                for(int col : cols)
                {
                    v[col] += cnt;
                }
            }
        }
    }
    
    int answer = 0;
    
    for(int i = 0; i < m; i++)
    {
        answer = max(answer, v[i]);
    }
    return answer;
}
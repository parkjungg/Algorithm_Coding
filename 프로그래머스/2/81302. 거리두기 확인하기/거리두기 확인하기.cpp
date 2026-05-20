#include <string>
#include <vector>
#include <bits/stdc++.h>

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int visited[5][5];

using namespace std;

bool bfs(int y, int x, vector<string> &place)
{
    memset(visited, -1, sizeof(visited));
    
    queue<pair<int, int>> q;
    
    q.push({y, x});
    visited[y][x] = 0;
    
    while(q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            
            if(ny < 0 || nx < 0 || ny >= 5 || nx >= 5)
                continue;
            if(visited[ny][nx] != -1)
                continue;
            if(visited[y][x] + 1 > 2)
                continue;
            
            visited[ny][nx] = visited[y][x] + 1;
            
            if(place[ny][nx] == 'X')
                continue;
            if(place[ny][nx] == 'P')
                return false;
            
            q.push({ny, nx});
        }
    }
    return true;
}

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    
    for(auto place : places)
    {
        bool ok = true;
        
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(place[i][j] == 'P')
                {
                    if(!bfs(i, j, place))
                        ok = false;
                }
            }
        }
        
        answer.push_back(ok ? 1 : 0);
    }
    return answer;
}
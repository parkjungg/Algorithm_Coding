#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

bool visited[104][104];
vector<int> answer;

int dfs(int y, int x, vector<string> &maps)
{
    visited[y][x] = true;
    
    int sum = maps[y][x] - '0';
    
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || nx < 0 || ny >= maps.size() || nx >= maps[0].size())
            continue;
        if(visited[ny][nx]) continue;
        if(maps[ny][nx] == 'X') continue;
        
        sum += dfs(ny, nx, maps);
    }
    return sum;
}
vector<int> solution(vector<string> maps) {
    
    for(int i = 0; i < maps.size(); i++)
    {
        for(int j = 0; j < maps[0].size(); j++)
        {
            if(isdigit(maps[i][j]) && !visited[i][j])
            {
                answer.push_back(dfs(i, j, maps));
            }
        }
    }
    if(answer.empty()) return {-1};
    sort(answer.begin(), answer.end());
    return answer;
}
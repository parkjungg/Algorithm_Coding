#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int N, w, result;
int max_size = -104;
int min_size = 104;
int max_ans = -100001;
int arr[101][101], visited[101][101];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x, int t)
{
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || nx < 0 || ny >= N || nx >= N || arr[ny][nx] <= t) continue;
        if(visited[ny][nx]) continue;
        
        dfs(ny, nx, t);
    }
}
int main() {
    cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> w;
            max_size = max(max_size, w);
            min_size = min(min_size, w);
            arr[i][j] = w;
        }
    }
    
    for(int T = 0; T <= max_size; T++)
    {
        memset(visited, 0, sizeof(visited));
        result = 0;
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(arr[i][j] > T && !visited[i][j])
                {
                    dfs(i, j, T);
                    result++;
                }
            }
        }
        max_ans = max(max_ans, result);
    }
    cout << max_ans;
    
    return 0;
}
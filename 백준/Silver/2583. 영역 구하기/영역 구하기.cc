#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int M, N, K;
int visited[101][101], arr[101][101];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int dfs(int y, int x)
{
    visited[y][x] = 1;
    int cnt = 1;
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= M || nx >= N || arr[ny][nx] == 1) continue;
        if(visited[ny][nx]) continue;
        cnt += dfs(ny, nx);
    }
    return cnt;
}
int main() {
    cin >> M >> N >> K;
    vector<int> ans;
    
    for(int t = 0; t < K; t++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        for(int i = y1; i < y2; i++)
        {
            for(int j = x1; j < x2; j++)
            {
                arr[i][j] = 1;
            }
        }
    }
    int result = 0;
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(!visited[i][j] && arr[i][j] == 0)
            {
                int temp = dfs(i, j);
                result++;
                ans.push_back(temp);
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    cout << result << '\n';
    for(int i : ans)
    {
        cout << i << ' ';
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int T, m, n, k, x, y;
int arr[51][51], visited[51][51];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x)
{
    visited[y][x] = 1;
    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if(ny < 0 || nx < 0 || ny >= n || nx >= m || arr[ny][nx] == 0) continue;
        if(visited[ny][nx]) continue;
        
        dfs(ny, nx);
    }
}
int main() {
    cin >> T;
    while(T--)
    {
        cin >> m >> n >> k;
        
        memset(arr, 0, sizeof(arr));
        memset(visited, 0, sizeof(visited));
        
        for(int i = 0; i < k; i++)
        {
            cin >> x >> y;
            arr[y][x] = 1;
        }
        
        int ans = 0;
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(arr[i][j] == 1 && !visited[i][j])
                {
                    dfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    
    return 0;
}
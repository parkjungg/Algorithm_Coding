#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int n, m;
const int max_s = 104;
int arr[max_s][max_s], visited[max_s][max_s], x, y;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int main() {
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = s[j] - '0';
        }
    }
    queue<pair<int, int>> q;
    visited[0][0] = 1;
    q.push({0, 0});
    while(q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny >= n || nx >= m || ny < 0 || nx < 0 || arr[ny][nx] == 0) continue;
            if(visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    cout << visited[n - 1][m - 1];
    
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, m, F_visited[1004][1004], J_visited[1004][1004], ret, y, x;
int sy, sx;
const int INF = 987654321;
char a[1004][1004];
string s;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

int main()
{
    cin >> n >> m;
    queue<pair<int, int>> q;
    fill(&F_visited[0][0], &F_visited[0][0] + 1004 * 1004, INF);
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        for(int j = 0; j < m; j++)
        {
            a[i][j] = s[j];
            if(s[j] == 'J')
            {
                sy = i;
                sx = j;
            }
            else if(s[j] == 'F')
            {
                F_visited[i][j] = 1;
                q.push({i, j});
            }
        }
    }
    
    while(q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m || a[ny][nx] == '#') continue;
            if(F_visited[ny][nx] != INF) continue;
            F_visited[ny][nx] = F_visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    
    q.push({sy, sx});
    J_visited[sy][sx] = 1;
    while(q.size())
    {
        tie(y, x) = q.front();
        q.pop();
        if(x == m - 1 || y == n - 1 || x == 0 || y == 0)
        {
            ret = J_visited[y][x];
            break;
        }
        for(int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m || J_visited[ny][nx] || a[ny][nx] == '#') continue;
            if(F_visited[ny][nx] <= J_visited[y][x] + 1) continue;
            J_visited[ny][nx] = J_visited[y][x] + 1;
            q.push({ny, nx});
        
        }
    }
    if(ret != 0) cout << ret << '\n';
    else cout << "IMPOSSIBLE \n";
    return 0;
}
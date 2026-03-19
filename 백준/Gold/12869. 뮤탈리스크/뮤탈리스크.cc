#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;
int hp[3];
int visited[61][61][61];

int damage[6][3] = {
    {9, 3, 1},
    {9, 1, 3},
    {3, 9, 1},
    {3, 1, 9},
    {1, 9, 3},
    {1, 3, 9}
};

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> hp[i];
    }
    
    queue<vector<int>> q;
    q.push({hp[0], hp[1], hp[2]});
    visited[hp[0]][hp[1]][hp[2]] = 1;
    
    while(q.size())
    {
        vector<int> cur = q.front();
        q.pop();
        
        int a = cur[0];
        int b = cur[1];
        int c = cur[2];
        
        if(a == 0 && b == 0 && c == 0)
        {
            cout << visited[a][b][c] - 1 << '\n';
            return 0;
        }
        
        for(int i = 0; i < 6; i++)
        {
            int na = max(0, a - damage[i][0]);
            int nb = max(0, b - damage[i][1]);
            int nc = max(0, c - damage[i][2]);
            
            if(visited[na][nb][nc]) continue;
            
            visited[na][nb][nc] = visited[a][b][c] + 1;
            q.push({na, nb, nc});
        }
    }
    return 0;
}
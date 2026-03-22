#include <bits/stdc++.h>

using namespace std;

int n, k;
int visited[100001];
int cnt[100001];

int main() {
    
    cin >> n >> k;
    
    memset(visited, -1, sizeof(visited));
    
    queue<int> q;
    q.push(n);
    visited[n] = 0;
    cnt[n] = 1;
    
    while(q.size())
    {
        int cur = q.front();
        q.pop();
        
        for(int next : {cur - 1, cur + 1, cur * 2})
        {
            if(next < 0 || next >= 100001) continue;
            
            if(visited[next] == -1)
            {
                visited[next] = visited[cur] + 1;
                cnt[next] = cnt[cur];
                q.push(next);
            }
            else if(visited[next] == visited[cur] + 1)
            {
                cnt[next] += cnt[cur];
            }
        }
    }
    
    cout << visited[k] << '\n';
    cout << cnt[k] << '\n';
    return 0;
}
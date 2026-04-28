#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> graph[101];
int visited[101];

int bfs(int start)
{
    memset(visited, 0, sizeof(visited));
    
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    
    int cnt = 1;
    
    while(q.size())
    {
        int cur = q.front();
        q.pop();
        
        for(int next : graph[cur])
        {
            if(!visited[next])
            {
                visited[next] = 1;
                q.push(next);
                cnt++;
            }
        }
    }
    return cnt;
}
int solution(int n, vector<vector<int>> wires) {
    int answer = 1e9;
    
    for(int i = 0; i < wires.size(); i++)
    {
        for(int j = 1; j <= n; j++) graph[j].clear();
        for(int j = 0; j < wires.size(); j++)
        {
            if(i == j) continue;
            
            int a = wires[j][0];
            int b = wires[j][1];
            
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        
        int cnt = bfs(1);
        
        int other = n - cnt;
        
        answer = min(answer, abs(cnt - other));
    }
    return answer;
}
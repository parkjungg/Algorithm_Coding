#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int answer;
bool visited[20004];
int solution(int n, vector<vector<int>> edge) {
    vector<int> graph[n + 1];
    for(auto e : edge)
    {
        graph[e[0]].push_back(e[1]);
        graph[e[1]].push_back(e[0]);
    }
    vector<int> dist(n + 1, 0);
    queue<int> q;
    
    q.push(1);
    visited[1] = true;
    
    while(q.size())
    {
        int now = q.front();
        q.pop();
        for(int next : graph[now])
        {
            if(!visited[next])
            {
                visited[next] = true;
                dist[next] = dist[now] + 1;
                q.push(next);
            }
        }
    }
    
    int maxDist = *max_element(dist.begin(), dist.end());
    
    for(int i = 1; i <= n; i++)
    {
        if(maxDist == dist[i])
        {
            answer++;
        }
    }
    return answer;
    
}
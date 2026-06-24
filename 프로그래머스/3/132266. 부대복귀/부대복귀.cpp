#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<int> dist;

void bfs(int start)
{
    queue<int> q;
    
    dist[start] = 0;
    q.push(start);
    
    while(q.size())
    {
        int cur = q.front();
        q.pop();
        
        for(int next : graph[cur])
        {
            if(dist[next] != -1)
                continue;
            
            dist[next] = dist[cur] + 1;
            q.push(next);
        }
    }
}

vector<int> solution(int n, vector<vector<int>> roads, vector<int> sources, int destination) {
    vector<int> answer;
    graph.resize(n + 1);
    dist.assign(n + 1, -1);
    
    for(auto &r : roads)
    {
        int a = r[0];
        int b = r[1];
        
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    bfs(destination);
    
    for(int source : sources)
    {
        answer.push_back(dist[source]);
    }
    return answer;
}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

const int INF = 3000000;
vector<pair<int, int>> adj[204];

int distS[204];
int distA[204];
int distB[204];

void dijkstra(int start, int dist[])
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    for(int i = 0; i < 204; i++)
        dist[i] = INF;    
    
    dist[start] = 0;
    pq.push({0, start});
    
    while(pq.size())
    {
        int cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if(dist[u] < cost) continue;
        
        for(auto& [v, weight] : adj[u])
        {
            int new_cost = cost + weight;
            if(new_cost < dist[v])
            {
                dist[v] = new_cost;
                pq.push({new_cost, v});
            }
        }
    }
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    
    for(int i = 0; i < 204; i++)
    {   
        adj[i].clear();
    }
    for(auto f : fares)
    {      
        adj[f[0]].push_back({f[1], f[2]});
        adj[f[1]].push_back({f[0], f[2]});
    }
    
    dijkstra(s, distS);
    dijkstra(a, distA);
    dijkstra(b, distB);
    
    int answer = INF;
    for(int i = 1; i <= n; i++)
    {
        answer = min(answer, distS[i] + distA[i] + distB[i]);
    }
    return answer;
}
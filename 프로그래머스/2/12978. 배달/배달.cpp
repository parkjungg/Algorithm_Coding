#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
vector<pair<int, int>> adj[3000];
vector<int> dist(3000, INF);

void dijkstra(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    dist[start] = 0;
    pq.push({0, start});
    
    while(pq.size())
    {
        int cost = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if(dist[u] < cost) continue;
        
        for(auto &[v, weight] : adj[u])
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

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;

    for(auto r : road)
    {
        int a = r[0];
        int b = r[1];
        int c = r[2];
        
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    
    dijkstra(1);
    
    for(int i = 1; i <= N; i++)
    {
        if(dist[i] <= K)
            answer++;
    }
    return answer;
}
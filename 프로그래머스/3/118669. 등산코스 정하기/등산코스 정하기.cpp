#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
vector<pair<int, int>> adj[50001];
vector<int> dist(50001, INF);
vector<int> isSummit(50001, 0);

void dijkstra(vector<int> &gates)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    for(int gate : gates)
    {
        dist[gate] = 0;
        pq.push({0, gate});
    }
    
    while(pq.size())
    {
        int intensity = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        
        if(dist[cur] < intensity) continue;
        if(isSummit[cur]) continue;
        
        for(auto &[v, cost] : adj[cur])
        {
            int nextIntensity = max(intensity, cost);
            if(dist[v] > nextIntensity)
            {
                dist[v] = nextIntensity;
                pq.push({nextIntensity, v});
            }
        }
    }
}

vector<int> solution(int n, vector<vector<int>> paths, vector<int> gates, vector<int> summits) {
    
    for(auto &p : paths)
    {
        adj[p[0]].push_back({p[1], p[2]});
        adj[p[1]].push_back({p[0], p[2]});
    }
    
    for(int summit : summits)
        isSummit[summit] = 1;
    
    dijkstra(gates);
    
    sort(summits.begin(), summits.end());
    
    int summitNum = 0;
    int minIntensity = INF;
    
    for(int summit : summits)
    {
        if(dist[summit] < minIntensity)
        {
            minIntensity = dist[summit];
            summitNum = summit;
        }
    }
    
    return {summitNum, minIntensity};
}
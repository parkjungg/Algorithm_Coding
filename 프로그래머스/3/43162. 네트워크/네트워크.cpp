#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> visited;
vector<vector<int>> graph;

void dfs(int node, int n)
{
    visited[node] = 1;
    for(int i = 0; i < n; i++)
    {
        if(graph[node][i] == 1 && !visited[i])
        {
            dfs(i, n);
        }
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    graph = computers;
    visited.resize(n, 0);
    
    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            dfs(i, n);
            answer++;
        }
    }
    return answer;
}
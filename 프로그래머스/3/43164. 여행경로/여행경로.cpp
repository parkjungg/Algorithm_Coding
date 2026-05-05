#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<bool> visited;
vector<string> answer;
bool fin = false;

void dfs(string cur, vector<vector<string>> tickets, vector<string> path, int cnt)
{
    if(fin) return;
    path.push_back(cur);
    
    if(cnt == tickets.size())
    {
        answer = path;
        fin = true;
        return;
    }
    
    for(int i = 0; i < tickets.size(); i++)
    {
        if(!visited[i] && tickets[i][0] == cur)
        {
            visited[i] = true;
            dfs(tickets[i][1], tickets, path, cnt + 1);
            visited[i] = false;
        }
    }
    path.pop_back();
}

vector<string> solution(vector<vector<string>> tickets) {
    
    sort(tickets.begin(), tickets.end());
    visited.resize(tickets.size(), false);
    
    vector<string> path;
    dfs("ICN", tickets, path, 0);
    
    return answer;
}
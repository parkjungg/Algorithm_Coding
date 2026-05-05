#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

set<vector<string>> s;
vector<bool> visited;

bool match(string uid, string bid)
{
    if(uid.size() != bid.size()) return false;
    
    for(int i = 0; i < uid.size(); i++)
    {
        if(bid[i] == '*') continue;
        if(uid[i] != bid[i]) return false;
    }
    return true;
}

void dfs(int depth, vector<string> &user_id, vector<string> &banned_id, vector<string> &path)
{
    if(depth == banned_id.size())
    {
        vector<string> temp = path;
        sort(temp.begin(), temp.end());
        s.insert(temp);
        return;
    }
    
    for(int i = 0; i < user_id.size(); i++)
    {
        if(visited[i]) continue;
        
        if(match(user_id[i], banned_id[depth]))
        {
            visited[i] = true;
            path.push_back(user_id[i]);
            
            dfs(depth + 1, user_id, banned_id, path);
            
            path.pop_back();
            visited[i] = false;
        }
    }
}
int solution(vector<string> user_id, vector<string> banned_id) {
    visited.resize(user_id.size(), false);
    vector<string> path;
    dfs(0, user_id, banned_id, path);
    
    return s.size();
}
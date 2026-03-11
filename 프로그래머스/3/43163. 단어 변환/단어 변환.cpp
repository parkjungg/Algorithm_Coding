#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int answer;

bool check(string a, string b)
{
    int diff = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] != b[i]) diff++;
    }
    return diff == 1;
}

int solution(string begin, string target, vector<string> words) {
    queue<pair<string, int>> q;
    bool visited[51] = {0};
    
    q.push({begin, 0});
    
    while(q.size())
    {
        string now = q.front().first;
        int depth = q.front().second;
        q.pop();
        
        if(now == target)
            return depth;
        
        for(int i = 0; i < words.size(); i++)
        {
            if(visited[i]) continue;
            if(check(now, words[i]))
            {
                visited[i] = true;
                q.push({words[i], depth + 1});
            }
        }
    }
    return 0;
}
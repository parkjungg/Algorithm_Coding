#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

map<string, int> mp;
void dfs(string order, string cur, int idx, int len)
{
    if(cur.size() == len)
    {
        mp[cur]++;
        return;
    }
    for(int i = idx; i < order.size(); i++)
    {
        dfs(order, cur + order[i], i + 1, len);
    }
}
vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    
    for(int len : course)
    {
        mp.clear();
        for(string order : orders)
        {
            sort(order.begin(), order.end());
            dfs(order, "", 0, len);
        }
    
    
        int maxCnt = 0;
        for(auto it : mp)
        {
            if(it.second >= 2)
            {
                maxCnt = max(maxCnt, it.second);
            }
        }

        for(auto it : mp)
        {
            if(it.second == maxCnt && it.second >= 2)
            {
                answer.push_back(it.first);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
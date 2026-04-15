#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
vector<int> solution(string s) {
    vector<int> answer;
    map<int, int> mp;
    
    string num = "";
    
    for(char c : s)
    {
        if(isdigit(c))
        {
            num += c;
        }
        else {
            if(num != "")
            {
                mp[stoi(num)]++;
                num = "";
            }
        }
    }
    if(num != "")
    {
        mp[stoi(num)]++;
    }
    
    vector<pair<int, int>> v(mp.begin(), mp.end());
    sort(v.begin(), v.end(), cmp);
    
    for(auto p : v)
    {
        answer.push_back(p.first);
    }
    return answer;
}
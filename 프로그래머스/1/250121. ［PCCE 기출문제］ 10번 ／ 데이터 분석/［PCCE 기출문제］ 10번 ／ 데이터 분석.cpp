#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int sortIdx;

bool cmp(vector<int> a, vector<int> b)
{
    return a[sortIdx] < b[sortIdx];
}
vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    map<string, int> mp = {
        {"code", 0},
        {"date", 1},
        {"maximum", 2},
        {"remain", 3}
    };
    
    int extIdx = mp[ext];
    sortIdx = mp[sort_by];
    
    for(auto v : data)
    {
        if(v[extIdx] < val_ext)
        {
            answer.push_back(v);
        }
    }
    
    sort(answer.begin(), answer.end(), cmp);
    
    return answer;
}
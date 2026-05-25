#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    int n = id_list.size();
    vector<int> answer(n, 0);
    
    set<string> s(report.begin(), report.end());
    map<string, int> cnt;
    map<string, int> idx;
    
    for(int i = 0; i < n; i++)
    {
        idx[id_list[i]] = i;
    }
    
    for(string str : s)
    {
        stringstream ss(str);
        string from, to;
        
        ss >> from >> to;
        
        cnt[to]++;
    }
    
    for(string str : s)
    {
        stringstream ss(str);
        string from, to;
        
        ss >> from >> to;
        
        if(cnt[to] >= k)
        {
            answer[idx[from]]++;
        }
    }
    
    return answer;
}
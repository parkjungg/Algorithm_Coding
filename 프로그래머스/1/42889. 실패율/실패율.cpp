#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, double> a, pair<int, double> b)
{
    if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    map<int, int> mp;
    vector<pair<int, double>> v;
    
    int person = stages.size(); // 총 사람 수
    
    for(int i : stages)
        mp[i]++;
    
    for(int i = 1; i <= N; i++)
    {
        double prob = 0;
        
        if(person != 0)
            prob = (double)mp[i] / person;
        
        v.push_back({i, prob});        
        person -= mp[i];
    }
    
    sort(v.begin(), v.end(), cmp);
    
    for(auto p : v)
        answer.push_back(p.first);    
    
    return answer;
}
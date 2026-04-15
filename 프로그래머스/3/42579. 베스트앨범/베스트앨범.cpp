#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool cmp1(pair<string,int> a, pair<string, int> b)
{
    return a.second > b.second;
}
bool cmp2(pair<int, int> a, pair<int, int> b)
{
    if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}
vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    
    map<string, int> total;
    map<string, vector<pair<int, int>>> music;
    
    for(int i = 0; i < genres.size(); i++)
    {
        total[genres[i]] += plays[i];
        music[genres[i]].push_back({plays[i], i});
    }
    vector<pair<string, int>> v(total.begin(), total.end());
    sort(v.begin(), v.end(), cmp1);
    
    for(auto it : v)
    {
        auto vec = music[it.first];
        sort(vec.begin(), vec.end(), cmp2);
        
        answer.push_back(vec[0].second);
        
        if(vec.size() > 1)
            answer.push_back(vec[1].second);
    }
    
    return answer;
}
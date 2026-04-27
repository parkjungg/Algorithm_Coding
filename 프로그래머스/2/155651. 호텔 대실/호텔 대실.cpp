#include <string>
#include <vector>
#include <bits/stdc++.h>
  
using namespace std;

int change(string s)
{
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    
    return h * 60 + m;
}
int solution(vector<vector<string>> book_time) {
    vector<pair<int, int>> v;
    
    for(auto p : book_time)
    {
        int start = change(p[0]);
        int end = change(p[1]) + 10;
        v.push_back({start, end});
    }
    
    sort(v.begin(), v.end());
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(auto t : v)
    {
        if(pq.size() && pq.top() <= t.first)
        {
            pq.pop();
        }
        pq.push(t.second);
    }
    return pq.size();
}
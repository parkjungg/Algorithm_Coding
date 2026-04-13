#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// 데드라인 짧은것부터 시작해서 그중에서 최대를 고름
vector<pair<int, int>> v;
int n, deadline, total, ret;
priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> deadline >> total;
        
        v.push_back({deadline, total});
    }
    sort(v.begin(), v.end());
    
    // 1 1 2 2 3 3 6
    for(int i = 0; i < n; i++)
    {
        pq.push(v[i].second);
        if(pq.size() > v[i].first)
        {
            pq.pop();
        }
    }
    
    while(pq.size())
    {
        ret += pq.top();
        pq.pop();
    }
    cout << ret << '\n';
    
    return 0;
}
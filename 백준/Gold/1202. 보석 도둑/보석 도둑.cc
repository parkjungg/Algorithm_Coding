#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, m, v, k, c;
long long ret;
vector<pair<int, int>> jewel;
vector<int> bags;
priority_queue<int> pq;

int main()
{
    cin >> n >> k;
    
    for(int i = 0; i < n; i++)
    {
        cin >> m >> v;
        jewel.push_back({m ,v});
    }
    for(int i = 0; i < k; i++)
    {
        cin >> c;
        bags.push_back(c);
    }
    
    sort(jewel.begin(), jewel.end());
    sort(bags.begin(), bags.end());
    
    int idx = 0;
    for(int i = 0; i < k; i++)
    {
        while(idx < n && jewel[idx].first <= bags[i])
        {
            pq.push(jewel[idx].second);
            idx++;
        }
        if(pq.size())
        {
            ret += pq.top();
            pq.pop();
        }
    }
    cout << ret << '\n';
    return 0;
}


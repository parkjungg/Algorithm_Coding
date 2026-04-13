#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, startT, finT;
int ret = 1;
vector<pair<int, int>> v;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> startT >> finT;
        v.push_back({finT, startT});
    }
    sort(v.begin(), v.end());
    
    int retT = v[0].first;
    for(int i = 1; i < v.size(); i++)
    {
        if(retT <= v[i].second)
        {
            retT = v[i].first;
            ret++;
        }
    }
    cout << ret << '\n';
    
    return 0;
}
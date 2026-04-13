#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, departT, checkT;
vector<pair<int, int>> v;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> departT >> checkT;
        v.push_back({departT, checkT});
    }
    
    sort(v.begin(), v.end());
    int totalT = v[0].first + v[0].second;
    for(int i = 1; i < v.size(); i++)
    {
        totalT = max(totalT, v[i].first);
        totalT += v[i].second;
    }
    cout << totalT << '\n';

    return 0;
}
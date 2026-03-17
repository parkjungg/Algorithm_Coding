#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, m, a[54][54];
int ret = 1000000;
vector<vector<int>> chickenList;
vector<pair<int, int>> homes, chicken;

void combi(int start, vector<int> v)
{
    if(v.size() == m)
    {
        chickenList.push_back(v);
        return;
    }
    for(int i = start + 1; i < chicken.size(); i++)
    {
        v.push_back(i);
        combi(i, v);
        v.pop_back();
    }
    return;
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(a[i][j] == 1) homes.push_back({i, j});
            if(a[i][j] == 2) chicken.push_back({i, j});
        }
    }
    vector<int> v;
    combi(-1, v);
    for(vector<int> cList : chickenList)
    {
        int result = 0;
        for(pair<int, int> home : homes)
        {
            int minV = 10000000;
            for(int ch : cList)
            {
                int dist = abs(home.first - chicken[ch].first) + abs(home.second - chicken[ch].second);
                minV = min(minV, dist);
            }
            result += minV;
        }
        ret = min(ret, result);
    }
    cout << ret << "\n";
    return 0;
}


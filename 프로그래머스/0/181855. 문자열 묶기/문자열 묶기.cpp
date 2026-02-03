#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> strArr) {
    map<int, int> mp;
    int maxVal = 0;
    for(string s : strArr)
    {
        int len = s.size();
        mp[len]++;
    }
    for(auto it : mp)
    {
        maxVal = max(maxVal, it.second);
    }
    return maxVal;
}
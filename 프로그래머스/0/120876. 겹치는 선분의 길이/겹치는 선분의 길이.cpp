#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> lines) {
    map<int, int> mp;
    int answer = 0;
    for(int i = 0; i < lines.size(); i++)
    {
        for(int j = lines[i][0]; j < lines[i][1]; j++)
        {
            mp[j]++;
        }
    }
    for(auto it : mp)
    {
        if(it.second >= 2) answer++;
    }
    return answer;
}
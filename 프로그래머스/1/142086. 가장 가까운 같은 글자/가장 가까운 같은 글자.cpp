#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> mp;
    
    for(int i = 0; i < s.size(); i++)
    {
        if(mp.find(s[i]) == mp.end())
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i - mp[s[i]]);
        }
        mp[s[i]] = i;
    }
    return answer;
}
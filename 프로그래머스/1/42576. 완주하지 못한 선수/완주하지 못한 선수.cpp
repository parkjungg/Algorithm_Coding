#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    map<string, int> mp;
    
    for(string name : participant)
    {
        mp[name]++;
    }
    for(string name : completion)
    {
        mp[name]--;
    }
    
    for(auto it : mp)
    {
        if(it.second > 0)
        {
            return it.first;
        }
    }
    return "";
}
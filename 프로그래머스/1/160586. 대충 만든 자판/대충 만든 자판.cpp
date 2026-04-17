#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> mp;
    
    for(string key : keymap)
    {
        for(int i = 0; i < key.size(); i++)
        {
            char c = key[i];
            int cnt = i + 1;
            
            if(mp.find(c) == mp.end())
            {
                mp[c] = cnt;
            }
            else
            {
                mp[c] = min(mp[c], cnt);
            }
        }
    }
    
    for(string target : targets)
    {
        int sum = 0;
        bool flag = true;
        
        for(char c : target)
        {
            if(mp.find(c) == mp.end()) {
                flag = false;
                break;
            }
            sum += mp[c];
        }
        
        if(flag) answer.push_back(sum);
        else answer.push_back(-1);
    }
    return answer;
}
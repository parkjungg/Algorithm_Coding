#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int change(string date)
{
    int y = stoi(date.substr(0, 4));
    int m = stoi(date.substr(5, 2));
    int d = stoi(date.substr(8, 2));
    
    return y * 12 * 28 + m * 28 + d;
}
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    unordered_map<string, int> mp;
    
    for(string term : terms)
    {
        string type = term.substr(0, 1);
        int month = stoi(term.substr(2));
        
        mp[type] = month;
    }
    
    int todayNum = change(today);
    
    for(int i = 0; i < privacies.size(); i++)
    {
        string privacy = privacies[i];
        
        string date = privacy.substr(0, 10);
        string type = privacy.substr(11, 1);
        
        int expire = change(date) + mp[type] * 28;
        
        if(expire <= todayNum)
            answer.push_back(i + 1);
    }
    return answer;
}
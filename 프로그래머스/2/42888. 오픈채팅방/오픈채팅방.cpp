#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> mp;
    
    for(string r : record)
    {
        stringstream ss(r);
        string cmd, uid, name;
        ss >> cmd >> uid;
        
        if(cmd == "Enter" || cmd == "Change")
        {
            ss >> name;
            mp[uid] = name;
        }
    }
    
    for(string r : record)
    {
        stringstream ss(r);
        string cmd, uid;
        
        ss >> cmd >> uid;
        
        if(cmd == "Enter")
        {
            answer.push_back(mp[uid] + "님이 들어왔습니다.");
        }
        else if(cmd == "Leave")
            answer.push_back(mp[uid] + "님이 나갔습니다.");
    }
    return answer;
}
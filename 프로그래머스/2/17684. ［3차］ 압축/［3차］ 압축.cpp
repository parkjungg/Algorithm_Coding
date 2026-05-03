#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    map<string, int> dict;
    
    for(int i = 0; i < 26; i++)
    {
        string s = "";
        s += ('A' + i);
        dict[s] = i + 1;
    }
    
    int idx = 27;
    
    for(int i = 0; i < msg.size(); )
    {
        string w = "";
        int lastIdx = 0;
        
        for(int j = i; j < msg.size(); j++)
        {
            w += msg[j];
            if(dict.find(w) == dict.end())
            {
                dict[w] = idx++;
                w.pop_back();
                break;
            }
            lastIdx = dict[w];
        }
        if(dict.find(w) != dict.end())
        {
            lastIdx = dict[w];
        }
        answer.push_back(lastIdx);
        i += w.size();
    }
    return answer;
}
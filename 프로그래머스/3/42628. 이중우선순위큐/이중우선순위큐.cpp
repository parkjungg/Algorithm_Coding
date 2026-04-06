#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> operations) {
    multiset<int> ms;
    
    for(string op : operations)
    {
        stringstream ss(op);
        char cmd;
        int num;
        
        ss >> cmd >> num;
        
        if(cmd == 'I')
            ms.insert(num);
        else
        {
            if(ms.empty()) continue;
            
            if(num == 1)
            {
                auto it = prev(ms.end());
                ms.erase(it);
            }
            else
            {
                ms.erase(ms.begin());
            }
        }
    }
    if(ms.empty()) return {0, 0};
    
    return {*prev(ms.end()), *ms.begin()};
}
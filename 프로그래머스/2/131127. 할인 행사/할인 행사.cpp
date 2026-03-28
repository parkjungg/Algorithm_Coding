#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    for(int start = 0; start <= discount.size() - 10; start++)
    {
        map<string, int> mp;
        
        for(int i = start; i < start + 10; i++)
        {
            mp[discount[i]]++;
        }
        
        bool ok = true;
        for(int i = 0; i < want.size(); i++)
        {
            if(mp[want[i]] != number[i])
            {
                ok = false;
                break;
            }
        }
        if(ok) answer++;
    }
    return answer;
}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> gems) {
    unordered_set<string> s(gems.begin(), gems.end());
    int total = s.size();
    
    unordered_map<string, int> mp;

    int minLen  = gems.size() + 1;
    int left = 0;
    int start = 0;
    int end = 0;
    
    for(int right = 0; right < gems.size(); right++)
    {
        mp[gems[right]]++;
        
        while(mp.size() == total)
        {
            if(right - left + 1 < minLen)
            {
                minLen = right - left + 1;
                start = left;
                end = right;
            }
            
            mp[gems[left]]--;
            
            if(mp[gems[left]] == 0)
            {
                mp.erase(gems[left]);
            }
            left++;
        }
    }
    
    return {start + 1, end + 1};
}
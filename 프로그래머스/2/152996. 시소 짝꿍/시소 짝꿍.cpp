#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(vector<int> weights) {
    long long answer = 0;
    
    sort(weights.begin(), weights.end());
    
    unordered_map<double, long long> mp;
    
    for(int w : weights)
    {
        answer += mp[w];
        
        answer += mp[w / 2.0];
        
        answer += mp[w * 2.0 / 3.0];
        
        answer += mp[w * 3.0 / 4.0];
        
        mp[w]++;
    }
    return answer;
}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int k, vector<int> tangerine) {
    map<int, int> mp;
    
    for(int n : tangerine)
    {
        mp[n]++;
    }
    
    vector<int> v;
    
    for(auto it : mp)
    {
        v.push_back(it.second);
    }
    sort(v.begin(), v.end(), greater<int>());
    
    int sum = 0;
    int answer = 0;
    
    for(int i : v)
    {
        sum += i;
        answer++;
        
        if(sum >= k) break;
    }
    
    return answer;
}
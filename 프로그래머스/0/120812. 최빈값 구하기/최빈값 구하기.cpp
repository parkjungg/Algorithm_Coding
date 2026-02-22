#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> array) {
    map<int, int> mp;
    for(int i : array)
        mp[i]++;
    
    int max = -101;
    
    for(auto it : mp)
    {
        if(max < it.second)
            max = it.second;
    }
    
    int count = 0;
    int answer = -1;
    
    for(auto it : mp)
    {
        if(it.second == max)
        {
            count++;
            answer = it.first;
        }
    }
    
    if(count > 1) return -1;
    
    return answer;
}
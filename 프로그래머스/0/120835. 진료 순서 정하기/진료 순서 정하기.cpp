#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> arr = emergency;
    map<int, int> mp;
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    for(int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]] = i + 1;
    }
    for(int i = 0; i < arr.size(); i++)
    {
        answer.push_back(mp[emergency[i]]);
    }
    
    return answer;
}
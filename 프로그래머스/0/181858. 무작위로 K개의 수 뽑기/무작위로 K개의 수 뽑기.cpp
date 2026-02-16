#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    map<int, int> mp;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(answer.size() == k) break;
        
        if(mp.find(arr[i]) != mp.end()) continue;
        else
        {
            mp[arr[i]] = 1;
            answer.push_back(arr[i]);
        }
    }
    
    while(answer.size() != k)
    {
        answer.push_back(-1);
    }
    return answer;
}
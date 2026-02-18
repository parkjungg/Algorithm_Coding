#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    map<int, int> mp;
    vector<int> arr;
    
    for(int i = 0; i < rank.size(); i++)
    {
        mp[rank[i]] = i;
    }
        
    for(auto it : mp)
    {
        int student = it.second;
        
        if(attendance[student])
        {
            arr.push_back(student);
        }
        if(arr.size() == 3)
           return 10000 * arr[0] + 100 * arr[1] + arr[2];
    }
}
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> nums)
{
    set<int> s(nums.begin(), nums.end());
    int kinds = s.size();
    int n = nums.size() / 2;
    
    return min(kinds, n);
}


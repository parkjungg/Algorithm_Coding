#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long calc(int level, vector<int> &diffs, vector<int> &times)
{
    long long total = times[0];
    
    for(int i = 1; i < diffs.size(); i++)
    {
        if(level >= diffs[i])
            total += times[i];
        else
        {
            long long fail = diffs[i] - level;
            
            total += (times[i] + times[i - 1]) * fail;
            total += times[i];
        }
    }
    return total;
}
int solution(vector<int> diffs, vector<int> times, long long limit) {
    int left = 1;
    int right = *max_element(diffs.begin(), diffs.end());
    
    int answer = right;
    
    while(left <= right)
    {
        int mid = (left + right) / 2;
        
        if(calc(mid, diffs, times) <= limit)
        {
            answer = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return answer;
}
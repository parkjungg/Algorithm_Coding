#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> &stones, int k, int mid)
{
    int cnt = 0;
    
    for(int stone : stones)
    {
        if(stone < mid)
        {
            cnt++;
            
            if(cnt >= k)
            {
                return false;
            }
        }
        else
        {
            cnt = 0;
        }
    }
    return true;
}

int solution(vector<int> stones, int k) {
    int left = 1;
    int right = *max_element(stones.begin(), stones.end());
    
    int answer = 0;
    
    while(left <= right)
    {
        int mid = (left + right) / 2;
        
        if(check(stones, k, mid))
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return answer;
}
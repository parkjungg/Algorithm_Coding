#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    int answer = 0;
    
    sort(rocks.begin(), rocks.end());
    
    int left = 1;
    int right = distance;
    
    while(left <= right)
    {
        int mid = (left + right) / 2;
        
        int prev = 0;
        int remove = 0;
        
        for(int rock : rocks)
        {
            if(rock - prev < mid)
            {
                remove++;
            }
            else
            {
                prev = rock;
            }
        }
        
        if(distance - prev < mid)
            remove++;
        
        if(remove <= n)
        {
            answer = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    return answer;
}
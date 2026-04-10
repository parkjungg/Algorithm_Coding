#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    // 1. 겹치는 사람 구하기
    for(int i = 0; i < lost.size(); i++)
    {
        for(int j = 0; j < reserve.size(); j++)
        {
            if(lost[i] == reserve[j])
            {
                lost[i] = -1;
                reserve[j] = -1;
                break;
            }
        }
    }
    
    // 2. 빌려주기
    for(int i = 0; i < lost.size(); i++)
    {
        if(lost[i] == -1) continue;
        
        for(int j = 0; j < reserve.size(); j++)
        {
            if(reserve[j] == lost[i] - 1 || reserve[j] == lost[i] + 1)
            {
                lost[i] = -1;
                reserve[j] = -1;
                break;
            }
        }
    }
    
    for(int i = 0; i < lost.size(); i++)
    {
        if(lost[i] == -1) answer++;
    }
    return n - (lost.size() - answer);
}
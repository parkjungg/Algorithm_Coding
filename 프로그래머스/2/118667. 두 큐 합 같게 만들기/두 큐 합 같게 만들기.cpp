#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    queue<int> q1, q2;
    long long sum1 = 0, sum2 = 0;
    int answer = 0;
    
    for(int x : queue1)
    {
        q1.push(x);
        sum1 += x;
    }
    for(int x : queue2)
    {
        q2.push(x);
        sum2 += x;
    }
    
    long long target = (sum1 + sum2) / 2;
    int limit = queue1.size() * 3;
    
    while(answer <= limit)
    {
        if(sum1 == target) return answer;
        
        if(sum1 > target)
        {
            int x = q1.front();
            q1.pop();
            q2.push(x);
            sum1 -= x;
        }
        else
        {
            int x = q2.front();
            q2.pop();
            q1.push(x);
            sum1 += x;
        }
        answer++;
    }
    
    return -1;
}
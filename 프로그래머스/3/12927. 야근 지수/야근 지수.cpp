#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    long long sum = 0;
    
    for(int num : works)
        sum += num;
    
    if(sum <= n) return 0;
    
    priority_queue<int> pq;
    
    for(int w : works)
    {
        pq.push(w);
    }
    
    while(n--)
    {
        int cur = pq.top();
        pq.pop();
        
        cur--;
        pq.push(cur);
    }
    
    while(pq.size())
    {
        long long ret = pq.top();
        pq.pop();
        answer += ret * ret;
    }
    
    return answer;
}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int, int>> q;
    priority_queue<int> pq;
    
    for(int i = 0; i < priorities.size(); i++)
    {
        q.push({priorities[i], i});
        pq.push(priorities[i]);
    }
    
    while(q.size())
    {
        int curPriority = q.front().first;
        int curIdx = q.front().second;
        q.pop();
        
        if(curPriority == pq.top())
        {
            answer++;
            pq.pop();
            if(curIdx == location)
                return answer;
        }
        else
        {
            q.push({curPriority, curIdx});
        }
    }
    return answer;
}
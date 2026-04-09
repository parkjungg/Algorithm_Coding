#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    queue<int> q;
    stack<int> stk;
    
    for(int i = 1; i <= order.size(); i++)
    {
        q.push(i);
    }
    
    for(int i = 0; i < order.size(); i++)
    {
        if(stk.size() && stk.top() == order[i])
        {
            stk.pop();
            answer++;
            continue;
        }
        while(q.size() && q.front() != order[i])
        {
            stk.push(q.front());
            q.pop();
        }
        
        if(q.size() && q.front() == order[i])
        {
             q.pop();
             answer++;
        }
        else
            break;            
    }
    return answer;
}
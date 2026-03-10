#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for(int i = 0; i < progresses.size(); i++)
    {
        int day = ceil((100.0 - progresses[i]) / speeds[i]);
        q.push(day);
    }
    
    while(q.size())
    {
        int cur = q.front();
        q.pop();
        
        int cnt = 1;
        
        while(q.size() && q.front() <= cur)
        {
            q.pop();
            cnt++;
        }
        answer.push_back(cnt);
    }
    
    return answer;
}

// 7 3 9
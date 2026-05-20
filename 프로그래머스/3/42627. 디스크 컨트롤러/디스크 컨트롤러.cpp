#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> jobs) {
    sort(jobs.begin(), jobs.end());
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    
    int time = 0;
    int idx = 0;
    int total = 0;
    int cnt = jobs.size();
    while(idx < cnt || pq.size())
    {
        
    
        while(idx < cnt && jobs[idx][0] <= time)
        {
            pq.push({jobs[idx][1], jobs[idx][0]});
            idx++;
        }

        if(pq.size())
        {
            int work = pq.top().first;
            int request = pq.top().second;
            pq.pop();

            time += work;
            total += (time - request);
        }
        else
        {
            time = jobs[idx][0];
        }
    }
    return total / cnt;
}
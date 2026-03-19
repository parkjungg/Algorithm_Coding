#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int n : score)
    {
        if(pq.size() < k)
        {
            pq.push(n);
        }
        else
        {
            if(pq.top() < n)
            {
                pq.pop();
                pq.push(n);
            }
        }
        answer.push_back(pq.top());
    }
    return answer;
}
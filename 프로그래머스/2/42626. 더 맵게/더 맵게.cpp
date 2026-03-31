#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int n : scoville)
    {
        pq.push(n);
    }
    
    while(pq.top() < K)
    {
        if(pq.size() < 2) return -1;
        
        int first = pq.top();
        pq.pop();
        
        int second = pq.top();
        pq.pop();
        
        int newFood = first + (second * 2);
        pq.push(newFood);
        
        answer++;
    }
    
    return answer;
}
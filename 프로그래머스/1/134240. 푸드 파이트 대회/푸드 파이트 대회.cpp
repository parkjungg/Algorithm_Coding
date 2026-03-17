#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    deque<int> dq;
    dq.push_back(0);
    
    for(int i = food.size() - 1; i >= 1; i--)
    {
        if(food[i] / 2 != 0)
        {
            int cnt = food[i] / 2;
            for(int j = 0; j < cnt; j++)
            {
                dq.push_back(i);
                dq.push_front(i);
            }
        }
    }
    
    for(int n : dq)
    {
        answer += to_string(n);
    }
    return answer;
}
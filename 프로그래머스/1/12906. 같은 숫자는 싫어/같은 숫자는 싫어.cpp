#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    stack<int> stk;
    stk.push(arr[0]);
    for(int n = 1; n < arr.size(); n++)
    {
        if(stk.size() && stk.top() != arr[n])
            stk.push(arr[n]);
    }
        
    while(!stk.empty())
    {
        answer.push_back(stk.top());
        stk.pop();
    }
    reverse(answer.begin(), answer.end());
    return answer;
}
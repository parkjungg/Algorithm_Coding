#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    stack<int> stk;
    
    for(int i = 0; i < numbers.size(); i++)
    {
        while(stk.size() && numbers[stk.top()] < numbers[i])
        {
            answer[stk.top()] = numbers[i];
            stk.pop();
        }            
        stk.push(i);
    }
    return answer;
}
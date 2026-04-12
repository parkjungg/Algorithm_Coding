#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string number, int k) {
    stack<char> stk;
    
    for(char c : number)
    {
        while(stk.size() && k > 0 && stk.top() < c)
        {
            stk.pop();
            k--;
        }
        stk.push(c);
    }
    
    while(k > 0)
    {
        stk.pop();
        k--;
    }
    
    string answer = "";
    while(stk.size())
    {
        answer += stk.top();
        stk.pop();
    }
    reverse(answer.begin(), answer.end());
    return answer;
}
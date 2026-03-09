#include<string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> stk;
    
    for(char c : s)
    {
        if(c == '(')
            stk.push(c);
        else
            if(stk.size() && stk.top() == '(')
                stk.pop();
            else
                answer = false;
    }
    if(stk.size()) answer = false;

    return answer;
}
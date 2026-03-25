#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
    stack<int> stk;
    
    for(char c : s)
    {
        if(stk.size() && stk.top() == c)
        {
            stk.pop();
        }
        else
            stk.push(c);
    }
    
    return stk.size() ? 0 : 1;
}
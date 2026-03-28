#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    stack<char> stk;
    
    for(char c : s)
    {
        if(c == '(' || c == '[' || c == '{')
        {
            stk.push(c);
        }
        else
        {
            if(!stk.size()) return false;
            
            if(c == ')' && stk.top() != '(') return false;
            else if(c == ']' && stk.top() != '[') return false;
            else if(c == '}' && stk.top() != '{') return false;
            
            stk.pop();
        }            
    }
    return stk.size() ? false : true;
}
int solution(string s) {
    int answer = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        string rotated = s.substr(i) + s.substr(0, i);
        if(check(rotated))
            answer++;
    }
    return answer;
}
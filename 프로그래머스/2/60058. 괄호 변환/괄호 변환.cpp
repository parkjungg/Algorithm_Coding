#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    stack<char> stk;
    
    for(char c : s)
    {
        if(c == '(')
            stk.push(c);
        else if(c == ')')
        {
            if(stk.size() && stk.top() == '(')
                stk.pop();
            else
                return false;
        }
    }
    return stk.empty();
}
string solution(string p) {
    if(p.empty()) return "";
    
    int left = 0;
    int right = 0;
    
    string u, v;
    
    for(int i = 0; i < p.size(); i++)
    {
        if(p[i] == '(') left++;
        else right++;
        
        if(left == right)
        {
            u = p.substr(0, i + 1);
            v = p.substr(i + 1);
            break;
        }
    }
    
    if(check(u))
    {
        return u + solution(v);
    }
    
    string answer = "(";
    answer += solution(v);
    answer += ")";
    
    for(int i = 1; i < u.size() - 1; i++)
    {
        if(u[i] == '(')
            answer += ')';
        else answer += '(';
    }
    return answer;
}
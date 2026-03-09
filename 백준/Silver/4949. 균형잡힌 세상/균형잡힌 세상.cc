#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string s;
int main()
{
    while(true)
    {
        stack<char> stk;
    
        getline(cin, s);
        if(s == ".") break;
        
        bool ok = true;
        for(char c : s)
        {
            if(c == '(' || c == '[')
                stk.push(c);
            else if(c == ')')
            {
                if(!stk.size() || stk.top() != '(')
                {
                    ok = false;
                    break;
                }
                stk.pop();
            }
            else if(c == ']')
            {
                if(!stk.size() || stk.top() != '[')
                {
                    ok = false;
                    break;
                }
                stk.pop();
            }
        }
        if(stk.size()) ok = false;
        
        if(ok)
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }
    return 0;
}
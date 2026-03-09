#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;
string s;
int main()
{
    cin >> n;
    
    while(n--)
    {
        stack<char> stk;
        cin >> s;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                stk.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(stk.size() && stk.top() == '(')
                    stk.pop();
                else
                    stk.push(')');
            }
        }
        
        if(stk.size())
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}
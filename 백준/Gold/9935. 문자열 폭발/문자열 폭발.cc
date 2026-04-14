#include <iostream>
#include <bits/stdc++.h>

using namespace std;
string s, t;
int main() {
    cin >> s >> t;
    
    stack<char> stk;
    
    for(char c : s)
    {
        stk.push(c);
        if(stk.size() >= t.size() && stk.top() == t[t.size() - 1])
        {
            string temp = "";
            for(int i = 0; i < t.size(); i++)
            {
                temp.push_back(stk.top());
                stk.pop();
            }
            reverse(temp.begin(), temp.end());
            
            if(temp != t)
            {
                for(char c1 : temp)
                {
                    stk.push(c1);
                }
            }
        }
    }
    if(stk.size() == 0) cout << "FRULA" << '\n';
    else
    {
        string temp = "";
        while(stk.size())
        {
            temp += stk.top();
            stk.pop();
        }
        reverse(temp.begin(), temp.end());
        cout << temp << '\n';
    }

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, answer;
string s;

int main() {
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        stack<int> stk;
        cin >> s;
        
        for(char c : s)
        {
            if(stk.size() && stk.top() == c)
                stk.pop();
            else
                stk.push(c);
        }
        if(stk.size() == 0) answer++;
    }
    cout << answer;
    return 0;
}

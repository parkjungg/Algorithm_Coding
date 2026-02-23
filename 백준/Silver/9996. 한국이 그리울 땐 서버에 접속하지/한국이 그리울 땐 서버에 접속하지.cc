#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string code;
    
    cin >> n;
    cin >> code;
    
    int idx = code.find("*");
    string pre = code.substr(0, idx);
    string suf = code.substr(idx + 1);
    
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        
        if(pre.size() + suf.size() > s.size())
        {
            cout << "NE\n";
        }
        else
        {
            if(pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
            {
                cout << "DA\n";
            }
            else
                cout << "NE\n";
        }
    }
    return 0;
}
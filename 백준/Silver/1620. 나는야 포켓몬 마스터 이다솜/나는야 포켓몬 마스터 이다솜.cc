#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    map<string, int> mp1;
    map<int, string> mp2;
    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        
        mp1[s] = i;
        mp2[i] = s;
    }
    
    for(int i = 0; i < m; i++)
    {
        string cmd;
        cin >> cmd;
        
        if(isdigit(cmd[0]))
        {
            int num = stoi(cmd);
            cout << mp2[num] << "\n";
        }
        else
        {
            cout << mp1[cmd] << "\n";
        }
    }
    return 0;
}
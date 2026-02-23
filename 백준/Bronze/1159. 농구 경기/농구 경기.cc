// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<char, int> mp;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        
        mp[s[0]]++;
    }
    
    string answer = "";
    for(auto it : mp)
    {
        if(it.second >= 5)
        {
            answer += it.first;
        }
    }
    if(answer.size() != 0) cout << answer;
    else cout << "PREDAJA";
    return 0;
}
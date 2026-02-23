// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    string rev = s;
    reverse(s.begin(), s.end());
    
    if(rev == s) cout << 1;
    else cout << 0;
    return 0;
}
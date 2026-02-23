#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        map<string, int> mp;
        for(int j = 0; j < m; j++)
        {
            string clothes, type;
            cin >> clothes >> type;
            
            mp[type]++; 
        }
        
        int answer = 1;
        for(auto it : mp)
        {
            answer *= (it.second + 1);
        }
        cout << answer - 1 << "\n";
    }
    return 0;
}
// headgear : 2, eyewear : 1
// eyewear : 3
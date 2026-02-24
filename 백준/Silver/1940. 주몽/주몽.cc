#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m;
    int answer = 0;
    cin >> n >> m;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i + 1; j < v.size(); j++)
        {
            if(v[i] + v[j] == m) answer++;
        }
    }
    cout << answer;
    
    
    return 0;
}

// 순서 상관있이 6개 중에 두개를 뽑아 합이 9가 되면 answer++
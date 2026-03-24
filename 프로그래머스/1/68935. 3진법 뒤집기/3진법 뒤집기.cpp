#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s = "";
    
    while(n > 0)
    {
        s += (n % 3) + '0';
        n /= 3;
    }
    
    answer = stoi(s, nullptr, 3);
    return answer;
}
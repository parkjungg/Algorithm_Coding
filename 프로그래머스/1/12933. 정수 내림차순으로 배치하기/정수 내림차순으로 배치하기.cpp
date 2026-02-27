#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    string s = to_string(n);
    vector<char> v;
    for(char c : s)
    {
        v.push_back(c);
    }
    
    sort(v.begin(), v.end(), greater<char>());
    string result(v.begin(), v.end());
    long long answer = stoll(result);
    return answer;
}
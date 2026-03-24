#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    vector<int> v;
    stringstream ss(s);
    int num;
    
    while(ss >> num)
    {
        v.push_back(num);
    }
    
    int minV = *min_element(v.begin(), v.end());
    int maxV = *max_element(v.begin(), v.end());
    
    return to_string(minV) + " " + to_string(maxV);
}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    double num = (double)my_str.size() / n;
    int idx = 0;
    for(int i = 0; i < ceil(num); i++)
    {
        answer.push_back(my_str.substr(idx, n));
        idx += n;
    }
    
    return answer;
}
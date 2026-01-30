#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(string s : strArr)
    {
        if(s.find("ad") == string::npos) answer.push_back(s);
    }
    return answer;
}
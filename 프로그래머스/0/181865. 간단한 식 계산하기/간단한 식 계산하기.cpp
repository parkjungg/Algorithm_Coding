#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string binomial) {
    stringstream ss(binomial);
    string word;
    vector<string> result;
    while(ss >> word)
    {
        result.push_back(word);
    }
    
    if(result[1] == "+") return stoi(result[0]) + stoi(result[2]);
    else if(result[1] == "-") return stoi(result[0]) - stoi(result[2]);
    else return stoi(result[0]) * stoi(result[2]);
}
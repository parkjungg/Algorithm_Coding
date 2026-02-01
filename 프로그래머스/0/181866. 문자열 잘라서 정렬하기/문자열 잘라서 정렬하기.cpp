#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


vector<string> split(const string& input, string delimeter)
{
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimeter);
    while(end != string::npos)
    {
        result.push_back(input.substr(start, end - start));
        start = end + delimeter.size();
        end = input.find(delimeter, start);
    }
    result.push_back(input.substr(start));
    return result;
}


vector<string> solution(string myString) {
    vector<string> answer = split(myString, "x");
    
     answer.erase(
        remove(answer.begin(), answer.end(), ""),
        answer.end()
    );
    sort(answer.begin(), answer.end());
    return answer;
}
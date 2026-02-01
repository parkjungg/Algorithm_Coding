#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(int age) {
    string answer = to_string(age);
    string result = "";
    vector<char> dict = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    for(int i = 0; i < answer.size(); i++)
    {
        result.push_back(dict[answer[i] - '0']);
    }
    return result;
}
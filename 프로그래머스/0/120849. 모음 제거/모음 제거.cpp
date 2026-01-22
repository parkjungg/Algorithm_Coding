#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string word = "aeiou";
    for(char c : my_string)
    {
        if(word.find(c) == string::npos)
        {
            answer += c;
        }
    }
    return answer;
}
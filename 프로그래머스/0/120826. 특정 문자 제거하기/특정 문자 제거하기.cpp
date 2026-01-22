#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    for(char c : my_string)
    {
        if(c != letter[0])
        {
            answer += c;
        }
    }
    return answer;
}
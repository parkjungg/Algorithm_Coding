#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(char &c : s)
    {
        int cnt = 0;
        while(cnt < index)
        {
            c = (c - 'a' + 1) % 26 + 'a';
            if(skip.find(c) == string::npos)
                cnt++;
        }
        answer += c;
    }
    return answer;
}
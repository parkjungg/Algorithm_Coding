#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    map<string, string> mp = {{"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"}, {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"}, {"eight", "8"}, {"nine", "9"}};
    
    for(auto a : mp)
    {
        while(s.find(a.first) != string::npos)
        {
            s.replace(s.find(a.first), a.first.size(), a.second);
        }
    }
    return stoi(s);
}

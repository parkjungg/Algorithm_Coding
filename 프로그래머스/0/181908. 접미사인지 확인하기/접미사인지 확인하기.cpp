#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string my_string, string is_suffix) {
    vector<string> v;
    for(int i = 0; i < my_string.size(); i++)
    {
        v.push_back(my_string.substr(i));
    }
    if(find(v.begin(), v.end(), is_suffix) != v.end()) return 1;
    else return 0;
}
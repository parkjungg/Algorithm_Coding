#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string my_string, string is_prefix) {
    vector<string> arr;
    string temp = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        temp.push_back(my_string[i]);
        arr.push_back(temp);
    }
    if(find(arr.begin(), arr.end(), is_prefix) != arr.end()) return 1;
    return 0;
}
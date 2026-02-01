#include <string>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    sort(indices.begin(), indices.end());
    int idx = 0;
    for(int i = 0; i < my_string.size(); i++)
    {
        if(i == indices[idx]) idx++;
        else answer += my_string[i];
    }
    return answer;
}
// 0 1 3 6 10..
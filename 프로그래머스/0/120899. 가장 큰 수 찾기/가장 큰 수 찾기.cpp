#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int m = *max_element(array.begin(), array.end());
    answer.push_back(m);
    auto i = max_element(array.begin(), array.end());
    answer.push_back((int)(i - array.begin()));
    return answer;
}
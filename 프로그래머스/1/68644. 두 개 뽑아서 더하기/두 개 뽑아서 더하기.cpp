#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> st;
    for(int i = 0; i < numbers.size(); i++)
    {
        for(int j = i + 1; j < numbers.size(); j++)
        {
            int sum = numbers[i] + numbers[j];
            st.insert(sum);
        }
    }
    for(int n : st)
    {
        answer.push_back(n);
    }
    return answer;
}
// set(중복 방지)
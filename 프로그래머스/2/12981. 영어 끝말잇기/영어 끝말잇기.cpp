#include <string>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer = {0, 0};
    
    set<string> st;
    st.insert(words[0]);
    
    for(int i = 1; i < words.size(); i++)
    {
        if(st.count(words[i]))
        {
            answer[0] = (i % n) + 1;
            answer[1] = (i / n) + 1;
            return answer;
        }
        if(words[i - 1].back() != words[i].front())
        {
            answer[0] = (i % n) + 1;
            answer[1] = (i / n) + 1;
            return answer;
        }
        st.insert(words[i]);
    }

    return answer;
}
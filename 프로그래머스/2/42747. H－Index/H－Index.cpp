#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
// 6 5 3 1 0
int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end(), greater<int>());
    
    for(int i = 0; i < citations.size(); i++)
    {
        if(citations[i] >= i + 1)
            answer = i + 1;
        else
            break;
    }
    return answer;
}

// 
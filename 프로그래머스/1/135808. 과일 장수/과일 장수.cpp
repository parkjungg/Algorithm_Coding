#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    sort(score.begin(), score.end());
    
    for(int i = score.size() - m; i >= 0; i -= m)
    {
        answer += score[i] * m;
    }
    return answer;
}
// 1 1 2 2 2 2 4 4 4 4 4 4
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// 맞춘개수 + 0의 개수 -> 최고순위
// 맞춘개수 -> 최저 순위 
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    
    int correct = 0;
    int zero = 0;
    
    for(int i = 0; i < lottos.size(); i++)
    {
        if(lottos[i] == 0) zero++;
        if(find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end())
            correct++;
    }
    int max_match = correct + zero;
    int min_match = correct;
    
    int max_rank = min(7 - max_match, 6);
    int min_rank = min(7 - min_match, 6);
    
    return {max_rank, min_rank};
}
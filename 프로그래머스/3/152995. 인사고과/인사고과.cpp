#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    if(a[0] == b[0])
        return a[1] < b[1];
    return a[0] > b[0];
}
int solution(vector<vector<int>> scores) {
    int wanhoA = scores[0][0];
    int wanhoB = scores[0][1];
    int wanhoSum = wanhoA + wanhoB;
    
    sort(scores.begin(), scores.end(), cmp);
    
    int rank = 1;
    int maxSecond = 0;
    
    for(auto &score : scores)
    {
        if(score[1] < maxSecond)
        {
            if(score[0] == wanhoA && score[1] == wanhoB)
                return -1;
        }
        else
        {
            maxSecond = max(maxSecond, score[1]);
            
            if(score[0] + score[1] > wanhoSum)
                rank++;
        }
    }
    return rank;
}
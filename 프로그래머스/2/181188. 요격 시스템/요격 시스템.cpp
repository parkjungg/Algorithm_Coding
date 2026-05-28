#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    if(a[1] == b[1]) return a[0] < b[0];
    return a[1] < b[1];
}
int solution(vector<vector<int>> targets) {
    int answer = 0;
    int temp = -1;
    sort(targets.begin(), targets.end(), cmp);
    
    for(auto t : targets)
    {
        int start = t[0];
        int end = t[1];
        
        if(temp < start)
        {
            answer++;
            temp = end - 1;
        }
    }
    return answer;
}
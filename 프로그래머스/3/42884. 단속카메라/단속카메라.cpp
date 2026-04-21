#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
bool cmp(vector<int> a, vector<int> b)
{
    return a[1] < b[1];
}

int solution(vector<vector<int>> routes) {
    int answer = 0;
    int pos = -30001;
    sort(routes.begin(), routes.end(), cmp);
    
    for(auto route : routes)
    {
        if(pos < route[0])
        {
            answer++;
            pos = route[1];
        }
    }
    return answer;
}
// -20 -15 / -18 -13 / -14 -5 / -5 -3 정렬
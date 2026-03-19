#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i = 0; i < photo.size(); i++)
    {   
        int sum = 0;
        for(int j = 0; j < photo[i].size(); j++)
        {
            auto it = find(name.begin(), name.end(), photo[i][j]);
            if(it != name.end())
            {
                int idx = it - name.begin();
                sum += yearning[idx];
            }
        }
        answer.push_back(sum);
    }
    return answer;
}
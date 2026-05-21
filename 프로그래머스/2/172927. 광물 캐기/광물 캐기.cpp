#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 0;
    
    int limit = (picks[0] + picks[1] + picks[2]) * 5;
    
    if(limit > minerals.size())
        limit = minerals.size();
    
    vector<vector<int>> groups;
    
    for(int i = 0; i < limit; i += 5)
    {
        int dia = 0;
        int iron = 0;
        int stone = 0;
        int score = 0;
        
        for(int j = i; j < i + 5 && j < limit; j++)
        {
            if(minerals[j] == "diamond")
            {
                dia++;
                score += 25;
            }
            else if(minerals[j] == "iron")
            {
                iron++;
                score += 5;
            }
            else
            {
                stone++;
                score += 1;
            }
        }
        groups.push_back({score, dia, iron, stone});
    }
    
    sort(groups.begin(), groups.end(), greater<vector<int>>());
    
    for(auto g : groups)
    {
        int dia = g[1];
        int iron = g[2];
        int stone = g[3];
        
        if(picks[0] > 0)
        {
            picks[0]--;
            answer += dia + iron + stone;
        }
        else if(picks[1] > 0)
        {
            picks[1]--;
            answer += dia * 5 + iron + stone;
        }
        else
        {
            picks[2]--;
            answer += dia * 25 + iron * 5 + stone;
        }
    }
    return answer;
}

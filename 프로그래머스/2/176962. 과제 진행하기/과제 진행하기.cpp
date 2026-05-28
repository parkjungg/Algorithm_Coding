#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int convert(string t)
{
    int h = stoi(t.substr(0, 2));
    int m = stoi(t.substr(3, 2));
    return h * 60 + m;
}

bool cmp(vector<string> a, vector<string> b)
{
    return convert(a[1]) < convert(b[1]);
}
vector<string> solution(vector<vector<string>> plans) {
    vector<string> answer;
    
    sort(plans.begin(), plans.end(), cmp);
    
    stack<pair<string, int>> stk;
    
    for(int i = 0; i < plans.size() - 1; i++)
    {
        string name = plans[i][0];
        int start = convert(plans[i][1]);
        int play = stoi(plans[i][2]);
        
        int nextStart = convert(plans[i + 1][1]);
        int gap = nextStart - start;
        
        if(play <= gap)
        {
            answer.push_back(name);
            
            int remain = gap - play;
            while(stk.size() && remain > 0)
            {
                string subName = stk.top().first;
                int subPlay = stk.top().second;
                stk.pop();
                
                if(subPlay <= remain)
                {
                    remain -= subPlay;
                    answer.push_back(subName);
                }
                else
                {
                    stk.push({subName, subPlay - remain});
                    remain = 0;
                }
            }
        }
        else
        {
            stk.push({name, play - gap});
        }
    }
    answer.push_back(plans.back()[0]);
    
    while(stk.size())
    {
        answer.push_back(stk.top().first);
        stk.pop();
    }
    return answer;
}
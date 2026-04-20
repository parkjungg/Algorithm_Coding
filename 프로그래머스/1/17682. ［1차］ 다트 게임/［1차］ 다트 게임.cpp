#include <string>
#include <bits/stdc++.h>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> scores;
    
    for(int i = 0; i < dartResult.size(); i++)
    {
        if(isdigit(dartResult[i]))
        {
            int num = dartResult[i] - '0';
            if(i + 1 < dartResult.size() && dartResult[i + 1] == '0')
            {
                num = 10;
                i++;
            }
            scores.push_back(num);
        }
        else if(dartResult[i] == 'S')
            scores.back() = pow(scores.back(), 1);
        else if(dartResult[i] == 'D')
            scores.back() = pow(scores.back(), 2);
        else if(dartResult[i] == 'T')
            scores.back() = pow(scores.back(), 3);
        else if(dartResult[i] == '*')
        {
            scores.back() *= 2;
            if(scores.size() > 1)
            {
                scores[scores.size() - 2] *= 2;
            }
        }
        else if(dartResult[i] == '#')
        {
            scores.back() *= -1;
        }
    }
    for(int n : scores)
        answer += n;
    return answer;
}
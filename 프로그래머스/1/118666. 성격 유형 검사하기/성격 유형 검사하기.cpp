#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> score;
    
    for(int i = 0; i < survey.size(); i++)
    {
        char a = survey[i][0];
        char b = survey[i][1];
        int choice = choices[i];
        
        if(choice > 4)
        {
            score[b] += (choice - 4);
        }
        else if(choice < 4)
        {
            score[a] += (4 - choice);
        }
    }
    
    answer += (score['R'] >= score['T']) ? 'R' : 'T';
    answer += (score['C'] >= score['F']) ? 'C' : 'F';
    answer += (score['J'] >= score['M']) ? 'J' : 'M';
    answer += (score['A'] >= score['N']) ? 'A' : 'N';
    
    return answer;
}
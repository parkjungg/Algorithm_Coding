#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(int i = 0; i < quiz.size(); i++)
    {
        vector<string> arr;
        stringstream ss(quiz[i]);
        string word;
        while(ss >> word)
        {
            arr.push_back(word);
        }
        
        if(arr[1] == "+")
        {
            if(stoi(arr[0]) + stoi(arr[2]) == stoi(arr[4]))
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else if(arr[1] == "-")
        {
           if(stoi(arr[0]) - stoi(arr[2]) == stoi(arr[4]))
                answer.push_back("O");
            else
                answer.push_back("X"); 
        }
    }
    return answer;
}
// 3, - 4, =, -3
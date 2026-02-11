#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> arr;
    stringstream ss(s);
    string word;
    while(ss >> word)
    {
        arr.push_back(word);
    }
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == "Z") answer -= stoi(arr[i - 1]);
        else
        {
            int temp = stoi(arr[i]);
            answer += temp;
        }
    }
    return answer;
}
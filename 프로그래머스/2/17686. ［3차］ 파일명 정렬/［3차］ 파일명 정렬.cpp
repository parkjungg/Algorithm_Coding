#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> files) {
    vector<tuple<string, int, int, string>> v;
    vector<string> answer;
    
    for(int idx = 0; idx < files.size(); idx++)
    {
        string file = files[idx];
        
        int i = 0;
        
        string head = "";
        while(i < file.size() && !isdigit(file[i]))
        {
            head += file[i];
            i++;
        }
        
        string num = "";
        while(i < file.size() && isdigit(file[i]) && num.size() < 5)
        {
            num += file[i];
            i++;
        }
        
        for(auto &c : head)
            c = tolower(c);
        
        v.push_back({head, stoi(num), idx, file});   
    }
    
    sort(v.begin(), v.end());
    
    for(auto t : v)
    {
        answer.push_back(get<3>(t));
    }
    return answer;
}
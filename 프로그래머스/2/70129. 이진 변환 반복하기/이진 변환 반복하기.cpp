#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int cnt = 0;
    int remove = 0;
    
    while(s != "1")
    {
        string temp = "";
        for(char c : s)
        {
            if(c == '0')
                remove++;
            else
                temp.push_back(c);
        }
        
        int n = temp.size();
        
        s = "";
        while(n > 0)
        {
            s += (n % 2) + '0';
            n /= 2;
        }
        
        reverse(s.begin(), s.end());
        
        cnt++;
    }
    answer.push_back(cnt);
    answer.push_back(remove);
    return answer;
}
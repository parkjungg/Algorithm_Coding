#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<string> v;
int m;
string line;

string removeZero(string s)
{
    int idx = 0;
    while(idx < s.size() && s[idx] == '0')
        idx++;
    if(idx == s.size()) return "0";
    return s.substr(idx);
}

bool cmp(string a, string b)
{
    if(a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}
int main()
{
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> line;
        string s = "";
        for(int j = 0; j < line.size(); j++)
        {
            if(isdigit(line[j])) s += line[j];
            else
            {
                if(s.size()) {
                    v.push_back(removeZero(s));
                    s = "";  
                }
            }
        }
        if(s.size()) v.push_back(removeZero(s));
    }
    sort(v.begin(), v.end(), cmp);
    
    for(string num : v)
    {
        cout << num << '\n';
    }
    return 0;
}
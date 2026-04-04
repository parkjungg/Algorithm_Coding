#include <string>
#include <bits/stdc++.h>

using namespace std;

bool isAlpha(char c)
{
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

char toLowerCase(char c)
{
    c = tolower(c);
    return c;
}

vector<string> makeSet(string s)
{
    vector<string> result;
    
    for(int i = 0; i < s.size() - 1; i++)
    {
        char c1 = s[i];
        char c2 = s[i + 1];
        
        if(isAlpha(c1) && isAlpha(c2))
        {
            string temp = "";
            temp += toLowerCase(c1);
            temp += toLowerCase(c2);
            result.push_back(temp);
        }
    }
    
    return result;
}

int solution(string str1, string str2) {
    vector<string> v1 = makeSet(str1);
    vector<string> v2 = makeSet(str2);
    
    map<string, int> mp1;
    map<string, int> mp2;
    
    for(string s : v1) mp1[s]++;
    for(string s : v2) mp2[s]++;
    
    int intersection = 0;
    int unionSet = 0;
    
    for(auto it : mp1)
    {
        string key = it.first;
        int cnt1 = it.second;
        int cnt2 = mp2[key];
        
        intersection += min(cnt1, cnt2);
        unionSet += max(cnt1, cnt2); 
    }
    for(auto it : mp2)
    {
        string key = it.first;
        if(mp1.find(key) == mp1.end())
        {
            unionSet += it.second;
        }
    }
    
    if(unionSet == 0) return 65536;
    return (intersection * 65536) / unionSet;
}

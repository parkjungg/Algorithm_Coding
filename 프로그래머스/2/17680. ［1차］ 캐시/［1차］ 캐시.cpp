#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string toLowerCase(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}
int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;
    
    if(cacheSize == 0) return cities.size() * 5;
    
    for(string city : cities)
    {
        city = toLowerCase(city);
        
        auto it = find(cache.begin(), cache.end(), city);
        
        if(it != cache.end())
        {
            answer += 1;
            cache.erase(it);
            cache.push_back(city);
        }
        else
        {
            answer += 5;
            if(cache.size() == cacheSize)
            {
                cache.erase(cache.begin());
            }
            cache.push_back(city);
        }
    }
    return answer;
}
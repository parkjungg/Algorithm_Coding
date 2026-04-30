#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int change(string s)
{
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));
    return h * 60 + m;
}

int calc(int time, vector<int> fees)
{
    int baseTime = fees[0];
    int baseFee = fees[1];
    int unitTime = fees[2];
    int unitFee = fees[3];
    
    if(time <= baseTime) return baseFee;
    
    int extra = time - baseTime;
    return baseFee + ((extra + unitTime - 1) / unitTime) * unitFee;
}
vector<int> solution(vector<int> fees, vector<string> records) {
    map<string, int> inTime;
    map<string, int> total;
    
    for(string record : records)
    {
        string time = record.substr(0, 5);
        string car = record.substr(6, 4);
        string type = record.substr(11);
        
        int now = change(time);
        
        if(type == "IN")
        {
            inTime[car] = now;
        }
        else
        {
            total[car] += (now - inTime[car]);
            inTime.erase(car);
        }
    }
    
    int end = change("23:59");
    
    for(auto x : inTime)
    {
        total[x.first] += (end - x.second);
    }
    vector<int> answer;
    
    for(auto x : total)
    {
        answer.push_back(calc(x.second, fees));
    }
    return answer;
}
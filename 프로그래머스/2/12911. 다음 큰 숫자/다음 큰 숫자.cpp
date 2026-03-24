#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool checkCnt(string a, string b)
{
    int cnt1 = 0;
    int cnt2 = 0;
    
    for(char c : a)
    {
        if(c == '1') cnt1++;
    }
    for(char c : b)
    {
        if(c == '1') cnt2++;
    }
    return cnt1 == cnt2 ? true : false;
}
string change(int num)
{
    string temp = "";
    while(num > 0)
    {
        temp += (num % 2) + '0';
        num /= 2;
    }
    reverse(temp.begin(), temp.end());
    
    return temp;
}
int solution(int n) {
    int answer = 0;
    string s1 = change(n);    
    
    while(true)
    {
        string s2 = change(++n);
        if(checkCnt(s1, s2))
        {
            return n;
        }
    } 
    return answer;
}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string bin1, string bin2) {
    int a = stoi(bin1, nullptr, 2);
    int b = stoi(bin2, nullptr, 2);
    int sum = a + b;
    
    string answer = "";
    
    if(sum == 0) answer = "0";
    while(sum > 0)
    {
        answer += (sum % 2) + '0';
        sum /= 2;
    }
    
    reverse(answer.begin(), answer.end());
    
    return answer;
}
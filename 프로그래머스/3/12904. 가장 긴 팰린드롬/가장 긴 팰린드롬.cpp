#include <iostream>
#include <string>
using namespace std;

int check(string s, int left, int right)
{
    while(left >= 0 && right <= s.size() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left - 1;
}
int solution(string s)
{
    int answer = 1;
    
    for(int i = 0; i < s.size(); i++)
    {
        answer = max(answer, check(s, i, i));
        answer = max(answer, check(s, i, i + 1));
    }

    return answer;
}
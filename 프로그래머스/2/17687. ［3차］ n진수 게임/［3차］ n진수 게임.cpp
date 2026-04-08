#include <string>
#include <vector>

using namespace std;

string convert(int num, int k)
{
    if(num == 0) return "0";
    
    string digit = "0123456789ABCDEF";
    string result = "";
    
    while(num > 0)
    {
        result = digit[num % k] + result;
        num /= k;
    }
    return result;
}
string solution(int n, int t, int m, int p) {
    string answer = "";
    string s = "";
    int num = 0;
    
    while(s.size() < t * m)
    {
        s += convert(num, n);
        num++;
    }
    
    for(int i = p - 1; answer.size() < t; i+=m)
    {
        answer += s[i];
    }
    return answer;
}
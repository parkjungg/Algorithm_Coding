#include <string>
#include <vector>

using namespace std;

bool isPrime(long long n)
{
    if(n == 1) return false;
    if(n == 2) return true;
    
    for(long long i = 3; i * i <= n; i+= 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
string convert(int n, int k)
{
    string s = "";
    
    while(n > 0)
    {
        s = to_string(n % k) + s;
        n /= k;
    }
    return s;
}

int solution(int n, int k) {
    int answer = 0;
    
    string s = convert(n, k);
    string temp = "";
    
    for(char c : s)
    {
        if(c == '0')
        {
            if(temp != "")
            {
                long long num = stoll(temp);
                if(isPrime(num)) answer++;
                temp = "";
            }
        }
        else
            temp += c;
    }
    
    if(temp != "")
    {
        long long num = stoll(temp);
        if(isPrime(num)) answer++;
    }
    return answer;
}
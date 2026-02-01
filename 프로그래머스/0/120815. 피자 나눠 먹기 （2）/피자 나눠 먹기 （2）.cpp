#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b)
{
    if(a == 0) return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int solution(int n) {
    int answer = lcm(n, 6);
    return answer / 6;
}
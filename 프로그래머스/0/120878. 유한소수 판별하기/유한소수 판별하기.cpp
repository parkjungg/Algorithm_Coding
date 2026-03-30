#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0) return b;
    return gcd(b % a, a);
}

int solution(int a, int b) {
    int x = gcd(a, b);
    b /= x;
    
    while(b % 2 == 0) b /= 2;
    while(b % 5 == 0) b /= 5;
    
    if(b == 1) return 1;
    else return 2;
}
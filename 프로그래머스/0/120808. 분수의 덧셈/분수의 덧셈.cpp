#include <string>
#include <vector>

using namespace std;


int gcd(int a, int b)
{
    if(a == 0) return b;
    return gcd(b % a, a);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int numer = numer1 * denom2 + numer2 * denom1;
    int denom = denom1 * denom2;
    
    int temp = gcd(numer, denom);
    
    answer.push_back(numer / temp);
    answer.push_back(denom / temp);
    return answer;
}
#include <string>
#include <vector>

using namespace std;
bool Check(int n)
{
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0) cnt++;
    }
    return cnt >= 3 ? 1 : 0;
}
int solution(int n) {
    int answer = 0;
    for(int i = 4; i <= n; i++)
    {
        if(Check(i)) answer++;
    }
    return answer;
}
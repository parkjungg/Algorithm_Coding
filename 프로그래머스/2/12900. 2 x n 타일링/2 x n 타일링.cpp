#include <string>
#include <vector>

using namespace std;

int dp[100000];

int solution(int n) {
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i <= 100000; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000007;
    }
    return dp[n];
}
#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long dp[2001];
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i = 3; i <= 2000; i++)
    {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 1234567;
    }
    return dp[n];
}

// n = 1 -> 1
// n = 2 -> 1 1 / 2  -> 2
// n = 3 -> 1 1 1 / 2 1 / 1 2 -> 3
// n = 4 -> 5
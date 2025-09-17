public class Solution {
    public long solution(int n) {
        long answer = 0;
        long[] dp = new long[2001];
        
        dp[1] = 1; dp[2] = 2;
        for(int i = 3; i <= 2000; i++)
        {
            dp[i] = (dp[i - 2] + dp[i - 1]) % 1234567;
        }
        return dp[n];
    }
}

// 1 -> 1
// 2 1 1 2 -> 2
// 3 -> 3
// 4 -> 5
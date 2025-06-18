using System;

public class Num1309
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int MOD = 9901;
        int[] dp = new int[N + 1];

        dp[0] = 1;
        dp[1] = 3;

        for (int i = 2; i <= N; i++)
        {
            dp[i] = (dp[i - 1] * 2 + dp[i - 2]) % MOD;
        }
        
        Console.WriteLine(dp[N]);
    }
}
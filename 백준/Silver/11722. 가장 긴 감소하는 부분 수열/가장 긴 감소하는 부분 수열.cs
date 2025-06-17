using System;

public class Num11722
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] dp = new int[N];

        Array.Fill(dp, 1);
        for (int i = 1; i < N; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[j] > arr[i])
                {
                    dp[i] = Math.Max(dp[i], dp[j] + 1);
                }
            }
        }

        int length = dp.Max();
        Console.WriteLine(length);
    }
}
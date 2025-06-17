using System;

public class Num11048
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = nums[0];
        int M = nums[1];

        int[,] room = new int[N + 1, M + 1];
        int[,] dp = new int[N + 1, M + 1];

        for (int i = 1; i <= N; i++)
        {
            int[] numbers = Console.ReadLine().Split().Select(int.Parse).ToArray();
            for (int j = 1; j <= M; j++)
            {
                room[i, j] = numbers[j - 1];
            }
        }

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                dp[i, j] = room[i, j] + Math.Max(
                    Math.Max(dp[i, j - 1], dp[i - 1, j]), dp[i - 1, j - 1]);
            }
        }
        Console.WriteLine(dp[N, M]);
    }
}
public class Num14728
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = nums[0];
        int T = nums[1];

        int[,] info = new int[N + 1, 2];
        for (int i = 1; i <= N; i++)
        {
            int[] input = Console.ReadLine().Split().Select(int.Parse).ToArray();
            info[i, 0] = input[0];
            info[i, 1] = input[1];
        }

        int[,] dp = new int[N + 1, T + 1];
        for (int i = 1; i <= N; i++)
        {
            for (int j = 0; j <= T; j++)
            {
                if (j >= info[i, 0])
                {
                    dp[i, j] = Math.Max(dp[i - 1, j], dp[i - 1, j - info[i, 0]] + info[i, 1]);
                }
                else
                {
                    dp[i, j] = dp[i - 1, j];
                }
            }
        }
        Console.WriteLine(dp[N, T]);
    }
}
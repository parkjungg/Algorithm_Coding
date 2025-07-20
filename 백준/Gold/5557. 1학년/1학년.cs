public class Num5557
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        long[,] dp = new long[N - 1, 21];

        dp[0, nums[0]] = 1;
        
        for (int i = 1; i < N - 1; i++)
        {
            for (int j = 0; j <= 20; j++)
            {
                if (dp[i - 1, j] > 0)
                {
                    int plus = j + nums[i];
                    int minus = j - nums[i];

                    if (plus >= 0 && plus <= 20)
                    {
                        dp[i, plus] += dp[i - 1, j];
                    }

                    if (minus >= 0 && minus <= 20)
                    {
                        dp[i, minus] += dp[i - 1, j];
                    }
                }
            }
        }
        Console.WriteLine(dp[N - 2, nums[N - 1]]);
        
        
        
    }
}
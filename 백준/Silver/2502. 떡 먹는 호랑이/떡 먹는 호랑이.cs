public class Num2502
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int D = nums[0];
        int K = nums[1];
        int[] dp = new int[D];

        dp[0] = 1; dp[1] = 1;

        while (true)
        {
            for (int i = 2; i < D; i++)
            {
                dp[i] = dp[i - 1] + dp[i - 2];
            }
          
            if (dp[D - 1] == K) break;
            else if (dp[D - 1] > K)
            {
                dp[0]++;
                dp[1] = dp[0];
            }
            else
            {
                dp[1]++;
            }
        }
        
        Console.Write($"{dp[0]}\n{dp[1]}");
    }
}

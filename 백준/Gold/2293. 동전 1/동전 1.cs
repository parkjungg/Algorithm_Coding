public class Num2293
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int n = nums[0];
        int k = nums[1];
        
        int[] coin = new int[n];
        int[] dp = new int[k + 1];

        dp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            coin[i] = int.Parse(Console.ReadLine());
        }

        foreach (int c in coin)
        {
            if(c > k) continue;
            for (int i = c; i <= k; i++)
            {
                dp[i] += dp[i - c];
            }
        }
        
        Console.WriteLine(dp[k]);
    }
}


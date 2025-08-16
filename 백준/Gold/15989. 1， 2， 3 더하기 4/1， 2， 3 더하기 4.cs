public class Num15989
{
    public static void Main(string[] args)
    {
        int T = int.Parse(Console.ReadLine());
        int MAX = 10000;
        
        int[,] dp = new int[MAX + 1, 4];
        dp[0, 1] = 1;
        dp[0, 2] = 1; dp[0, 3] = 1;
        for (int i = 1; i <= MAX; i++)
        {
            dp[i, 1] = 1;
            if (i - 2 >= 0)
            {
                dp[i, 2] = dp[i, 1] + dp[i - 2, 2];
            }
            else
            {
                dp[i, 2] = dp[i, 1];
            }

            if (i - 3 >= 0)
            {
                dp[i, 3] = dp[i, 2] + dp[i - 3, 3];
            }
            else
            {
                dp[i, 3] = dp[i, 2];
            }
        }

        for (int i = 0; i < T; i++)
        {
            int n = int.Parse(Console.ReadLine());
            Console.WriteLine(dp[n, 3]);
        }
    }
}
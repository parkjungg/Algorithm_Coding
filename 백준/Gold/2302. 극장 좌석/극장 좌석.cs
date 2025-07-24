public class Num2302
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int M = int.Parse(Console.ReadLine());
        
        List<int> vip = new List<int>();
        int[] dp = new int[N + 1];

        for (int i = 0; i < M; i++)
        {
            vip.Add(int.Parse(Console.ReadLine()));
        }

        dp[0] = 1;
        dp[1] = 1;
        
        for (int i = 2; i <= N; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        int result = 1;
        int prev = 0;

        foreach (int v in vip)
        {
            int len = v - prev - 1;
            result *= dp[len];
            prev = v;
        }

        result *= dp[N - prev];
        Console.WriteLine(result);
    }
}
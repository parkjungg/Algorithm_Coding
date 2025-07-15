public class Num12852
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] dp = new int[N + 1];
        int[] before = new int[N + 1];

        for (int i = 2; i <= N; i++)
        {
            dp[i] = dp[i - 1] + 1;
            before[i] = i - 1;

            if (i % 2 == 0 && dp[i] > dp[i / 2] + 1)
            {
                dp[i] = dp[i / 2] + 1;
                before[i] = i / 2;
            }
            
            if (i % 3 == 0 && dp[i] > dp[i / 3] + 1)
            {
                dp[i] = dp[i / 3] + 1;
                before[i] = i / 3;
            }
        }
        Console.WriteLine(dp[N]);
        
        List<int> path = new List<int>();
        for (int i = N; i != 0; i = before[i])
        {
            path.Add(i);
            if (i == 1) break;
        }
        Console.WriteLine(string.Join(" ", path));
    }
}
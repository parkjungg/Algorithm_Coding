public class Num15486
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[,] table = new int[N + 1, 2];
        int[] dp = new int[N + 1];
        // dp[i] = i 번째 날까지 벌 수 있는 이익
        
        for (int i = 1; i <= N; i++)
        {
            int[] info = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            table[i, 0] = info[0];
            table[i, 1] = info[1];
        }

        for (int i = 1; i <= N; i++)
        {
            int t = table[i, 0]; // 날짜 
            int p = table[i, 1]; // 이익

            if (i + t - 1 <= N)
            {
                dp[i + t - 1] = Math.Max(dp[i + t - 1], dp[i - 1] + p);
            }

            dp[i] = Math.Max(dp[i], dp[i - 1]);
        }
        
        Console.WriteLine(dp[N]);
    }
}
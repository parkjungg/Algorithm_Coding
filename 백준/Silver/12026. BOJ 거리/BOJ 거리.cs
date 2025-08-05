public class Num12026
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        string blocks = Console.ReadLine();
        int[] dp = new int[N];

        for (int i = 0; i < N; i++)
        {
            dp[i] = int.MaxValue;
        }

        dp[0] = 0;
        for (int i = 0; i < N; i++)
        {
            if (dp[i] == int.MaxValue) continue;

            for (int j = i + 1; j < N; j++)
            {
                if (IsNext(blocks[i], blocks[j]))
                {
                    int energy = (j - i) * (j - i);
                    dp[j] = Math.Min(dp[j], dp[i] + energy);
                }
            }
        }
        Console.WriteLine(dp[N - 1] == int.MaxValue ? -1 : dp[N - 1]);
    }

    private static bool IsNext(char now, char next)
    {
        return (now == 'B' && next == 'O') ||
               (now == 'O' && next == 'J') ||
               (now == 'J' && next == 'B');
    }
}
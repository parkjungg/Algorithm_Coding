public class Num11052
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] cardPrice = Console.ReadLine().Split().Select(int.Parse).ToArray();

        int[] dp = new int[N + 1];
        
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                dp[i] = Math.Max(dp[i], dp[i - j] + cardPrice[j - 1]);
            }
        }
        Console.WriteLine(dp[N]);
    }
}
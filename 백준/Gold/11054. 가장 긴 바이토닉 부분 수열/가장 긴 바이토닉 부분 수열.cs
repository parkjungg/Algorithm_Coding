public class Num11054
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        int[] dp = new int[N];
        int[] dpReverse = new int[N];

        Array.Fill(dp, 1);
        Array.Fill(dpReverse, 1);
        
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (arr[i] > arr[j])
                {
                    dp[i] = Math.Max(dp[i], dp[j] + 1);
                }
            }
        }

        for (int i = N - 1; i >= 0; i--)
        {
            for (int j = N - 1; j > i; j--)
            {
                if (arr[i] > arr[j])
                {
                    dpReverse[i] = Math.Max(dpReverse[i], dpReverse[j] + 1);
                }
            }
        }

        int length = 0;
        for (int i = 0; i < N; i++)
        {
            length = Math.Max(length, dp[i] + dpReverse[i] - 1);
        }
        Console.WriteLine(length);
    }
}
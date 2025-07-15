public class Num1446
{
    public static void Main(string[] args)
    {
        int[] numbers = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = numbers[0];
        int D = numbers[1];

        List<(int start, int end, int cost)> infos = new List<(int start, int end, int cost)>();
        for (int i = 0; i < N; i++)
        {
            int[] temp = Console.ReadLine().Split().Select(int.Parse).ToArray();
            if(temp[1] > D) continue;
            if(temp[1] - temp[0] <= temp[2]) continue;
            infos.Add((temp[0], temp[1], temp[2]));
        }
        
        int[] dp = new int[D + 1];
        for (int i = 0; i <= D; i++) dp[i] = i;

        for (int i = 0; i <= D; i++)
        {
            if (i > 0)
            {
                dp[i] = Math.Min(dp[i], dp[i - 1] + 1);
            }

            foreach (var info in infos)
            {
                if (info.start == i && info.end <= D)
                {
                    dp[info.end] = Math.Min(dp[info.end], dp[i] + info.cost);
                }
            }
        }
        Console.WriteLine(dp[D]);
    }
}
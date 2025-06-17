using System;

public class Num10819
{
    private static int N;
    private static int[] arr;
    private static int max = int.MinValue;
    private static bool[] visited;
    private static int[] perm;
    public static void Main(string[] args)
    {
        N = int.Parse(Console.ReadLine());
        arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
        visited = new bool[N];
        perm = new int[N];

        BackTracking(0);
        Console.WriteLine(max);
    }

    private static void BackTracking(int depth)
    {
        if (depth == N)
        {
            int sum = 0;
            for (int i = 0; i < N - 1; i++)
            {
                sum += Math.Abs(perm[i] - perm[i + 1]);
            }
            max = Math.Max(sum, max);
            return;
        }

        for (int i = 0; i < N; i++)
        {
            if (!visited[i])
            {
                visited[i] = true;
                perm[depth] = arr[i];
                BackTracking(depth + 1);
                visited[i] = false;
            }
        }
    }
}
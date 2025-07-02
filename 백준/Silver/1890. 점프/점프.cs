using System;

public class Num1890
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[,] board = new int[N, N];
        long[,] dp = new long[N, N];
        
        for (int i = 0; i < N; i++)
        {
            string[] line = Console.ReadLine().Split(' ');
            for (int j = 0; j < N; j++)
            {
                board[i, j] = int.Parse(line[j]);
            }
        }

        dp[0, 0] = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if(dp[i,j] == 0 || (i == N -1 && j == N - 1)) continue;
                
                int right = j + board[i,j];
                int down = i + board[i,j];

                if (right < N) dp[i, right] = dp[i, j] + dp[i, right];
                if (down < N) dp[down, j] = dp[i, j] + dp[down, j];
            }
        }
        Console.WriteLine(dp[N - 1,N - 1]);
    }
}
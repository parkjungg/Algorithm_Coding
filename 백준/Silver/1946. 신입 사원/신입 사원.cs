using System;

public class Num1946
{
    public static void Main(string[] args)
    {
        int T = int.Parse(Console.ReadLine());

        for (int i = 0; i < T; i++)
        {
            int N = int.Parse(Console.ReadLine());
            int[] score = new int[N + 1];
            int count = 1;
            
            for (int j = 1; j <= N; j++)
            {
                int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
                int doc = nums[0];
                int interview = nums[1];
                score[doc] = interview;
            }

            int minScore = score[1];
            
            for (int j = 2; j <= N; j++)
            {
                if (score[j] < minScore)
                {
                    count++;
                    minScore = score[j];
                }
            }
            Console.WriteLine(count);
        }
    }
}

// 1 4
// 2 3
// 3 2
// 4 1
// 5 5
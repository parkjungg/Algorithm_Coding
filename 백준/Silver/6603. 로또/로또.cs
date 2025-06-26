using System;

public class Num6603
{
    private static int[] result = new int[6];
    private static int[] numbers;
    public static void Main(string[] args)
    {
        while (true)
        {
            int[] numCase = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int k = numCase[0];
            if (k == 0) return;
                    
            numbers = new int[k];
            for (int i = 0; i < k; i++)
            {
                numbers[i] = numCase[i + 1];
            }
            BackTracking(0,0);
            Console.WriteLine();
        }
        
    }

    private static void BackTracking(int start, int depth)
    {
        if (depth == 6)
        {
            Console.WriteLine(string.Join(" ", result));
            return;
        }

        for (int i = start; i < numbers.Length; i++)
        {
            result[depth] = numbers[i];
            BackTracking(i + 1, depth + 1);
        }
        
    }
}
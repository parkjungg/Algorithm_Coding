using System;

// Silver 1 카드 합체 놀이
public class Num15903
{
    public static void Main(string[] ars)
    {
        long[] arr = Console.ReadLine().Split().Select(long.Parse).ToArray();
        int n = (int)arr[0];
        int m = (int)arr[1];

        PriorityQueue<long, long> card = new PriorityQueue<long, long>();
        arr = Console.ReadLine().Split().Select(long.Parse).ToArray();
        for (int i = 0; i < n; i++)
        {
            card.Enqueue(arr[i], arr[i]);
        }

        for (int i = 0; i < m; i++)
        {
            long first = card.Dequeue();
            long second = card.Dequeue();
            long sum = first + second;
            card.Enqueue(sum, sum);
            card.Enqueue(sum, sum);
        }

        long result = 0;
        while (card.Count > 0)
        {
            result += card.Dequeue();
        }
        
        Console.WriteLine(result);
    }
}
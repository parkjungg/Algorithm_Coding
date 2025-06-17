using System;

public class Num1038
{
    static List<long> list = new List<long>();
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        for (int i = 0; i <= 9; i++)
        {
            BackTracking(i, i);
        }
        list.Sort();
        if (N < list.Count)
        {
            Console.WriteLine(list[N]);
        }
        else
        {
            Console.WriteLine(-1);
        }
    }

    private static void BackTracking(long num, int lastDigit)
    {
        list.Add(num);
        for (int i = 0; i < lastDigit; i++)
        {
            BackTracking(num * 10 + i, i);
        }
    }
}
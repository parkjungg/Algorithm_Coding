using System;

public class Num1138
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] height = Console.ReadLine().Split().Select(int.Parse).ToArray();
        List<int> line = new List<int>();
        
        for (int i = N - 1; i >= 0; i--)
        {
            line.Insert(height[i], i + 1);
        }
        Console.WriteLine(string.Join(" ", line));
    }
}
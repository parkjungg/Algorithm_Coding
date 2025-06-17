using System;
public class Num1912
{
    public static void Main(string[] args)
    {
        int n = int.Parse(Console.ReadLine());
        
        int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
        
        int sum = arr[0];
        int max = arr[0];
        
        for (int i = 1; i < n; i++)
        {
            sum = Math.Max(arr[i], sum + arr[i]);
            max = Math.Max(max, sum);
        }
        Console.WriteLine(max);
    }
}
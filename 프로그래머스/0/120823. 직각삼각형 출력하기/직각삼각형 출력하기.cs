using System;

public class Example
{
    public static void Main()
    {
        String[] s;

        Console.Clear();
        s = Console.ReadLine().Split(' ');

        int n = Int32.Parse(s[0]);

        for(int i = 0; i < n; i++)
        {
            Console.WriteLine(new string('*', i + 1));
        }
       
        
    }
}
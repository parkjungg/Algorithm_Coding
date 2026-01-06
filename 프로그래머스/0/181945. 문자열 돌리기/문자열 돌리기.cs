using System;

public class Example
{
    public static void Main()
    {
        String s;

        Console.Clear();
        s = Console.ReadLine();
        
        int len = s.Length;
        
        for(int i = 0; i < len; i++)
        {
            Console.WriteLine(s[i]);
        }

    }
}
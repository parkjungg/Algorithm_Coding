public class Num1439
{
    public static void Main(string[] args)
    {
        string str = Console.ReadLine();
        int count = 0;
        
        for (int i = 0; i < str.Length - 1; i++)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }
        Console.WriteLine((count + 1) / 2);
    }
}
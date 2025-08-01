public class Num9660
{
    public static void Main(string[] args)
    {
        long N = long.Parse(Console.ReadLine());
        
        if(N % 7 == 2 || N % 7 == 0) Console.WriteLine("CY");
        else Console.WriteLine("SK");
    }
}

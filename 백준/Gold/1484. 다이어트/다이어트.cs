public class Num1484
{
    public static void Main(string[] args)
    {
        int G = int.Parse(Console.ReadLine());
        bool isExist = false;
        
        long s = 1;
        long e = 2;

        while (e < 100000)
        {
            long ps = s * s;
            long pe = e * e;

            if (pe - ps == G)
            {
                isExist = true;
                Console.WriteLine(e);
            }

            if (pe - ps > G)
            {
                s++;
            }
            else
            {
                e++;
            }
        }

        if (!isExist)
        {
            Console.WriteLine(-1);
        }
    }
}
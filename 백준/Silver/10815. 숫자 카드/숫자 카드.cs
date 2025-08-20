using System.Text;

public class Num10815
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] numCard = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Array.Sort(numCard);

        int M = int.Parse(Console.ReadLine());
        int[] checkNum = Console.ReadLine().Split().Select(int.Parse).ToArray();

        var sb = new StringBuilder();

        for (int i = 0; i < checkNum.Length; i++)
        {
            if (BinarySearch(checkNum[i], numCard))
            {
                sb.Append("1 ");
            }
            else sb.Append("0 ");
        }
        Console.WriteLine(sb.ToString());
    }

    private static bool BinarySearch(int number, int[] numCard)
    {
        int left = 0;
        int right = numCard.Length - 1;
        
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (numCard[mid] == number)
            {
                return true;
            }

            if (number < numCard[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return false;
    }
}

// -10 2 3 6 10
// -10 -5 2 3 4 5 9 10
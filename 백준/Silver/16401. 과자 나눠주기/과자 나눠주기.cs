public class Num16401
{
    private static int[] snacks;
    private static int N, M;
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        M = nums[0];
        N = nums[1]; 
        
        snacks = Console.ReadLine().Split().Select(int.Parse).ToArray();
        BinarySearch();
    }

    private static void BinarySearch()
    {
        long left = 1;
        long right = snacks.Max();
        long ans = 0;

        while (left <= right)
        {
            long mid = (left + right) / 2;
            long count = 0;

            foreach (var snack in snacks)
            {
                count += snack / mid;
            }

            if (count >= M)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        Console.WriteLine(ans);
    }
}
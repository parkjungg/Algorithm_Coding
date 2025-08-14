public class Num1806
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        int N = nums[0];
        int S = nums[1];
        
        int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        int start = 0;
        int end = 0;
        int min = int.MaxValue;
        int sum = 0;
        
        while (true)
        {
            if (sum >= S)
            {
                int diff = end - start;
                min = Math.Min(min, diff);
                sum -= arr[start++];
            }
            else
            {
                if (end == N) break;
                sum += arr[end++];
            }
        }
        Console.WriteLine(min == int.MaxValue ? 0 : min);
    }
}
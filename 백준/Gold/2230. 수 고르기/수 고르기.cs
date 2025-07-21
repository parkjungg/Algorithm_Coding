public class Num2230
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        int N = nums[0];
        int M = nums[1];
        
        int[] arr = new int[N];

        for (int i = 0; i < N; i++)
        {
            arr[i] = int.Parse(Console.ReadLine());
        }
        int start = 0;
        int end = 0;
        int min = int.MaxValue;
        
        Array.Sort(arr);
        
        while (start < N && end < N)
        {
            int diff = arr[start] - arr[end];

            if (diff >= M)
            {
                min = Math.Min(min, diff);
                end++;
            }
            else
            {
                start++;
            }
        }
        Console.WriteLine(min);
    }
}
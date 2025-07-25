public class Num13164
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = nums[0];
        int K = nums[1];
        
        int[] height = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] diff = new int[N - 1];
        for (int i = 0; i < N - 1; i++)
        {
            diff[i] = height[i + 1] - height[i];
        }
        
        Array.Sort(diff);   
        // 1 2 2 4
        int result = 0;
        for (int i = 0; i < N - K; i++)
        {
            result += diff[i];
        }
        Console.WriteLine(result);
    }
}
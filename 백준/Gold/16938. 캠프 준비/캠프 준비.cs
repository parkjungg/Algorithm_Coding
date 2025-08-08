public class Num16938
{
    private static int[] problem;
    private static int N, L, R, X;
    private static int count = 0;
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        N = nums[0];
        L = nums[1];
        R = nums[2];
        X = nums[3];

        problem = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        BackTracking(0, 0, 0, int.MaxValue, int.MinValue);
        Console.WriteLine(count);
    }

    private static void BackTracking(int index, int selected, int sum, int min, int max)
    {
        if (index == N)
        {
            if (selected >= 2 && sum >= L && sum <= R && (max - min) >= X)
            {
                count++;
            }
            return;
        }
        
        BackTracking(index + 1, selected + 1, sum + problem[index],
            Math.Min(min, problem[index]), Math.Max(max, problem[index]));
        
        BackTracking(index + 1, selected, sum, min, max);
    }
}
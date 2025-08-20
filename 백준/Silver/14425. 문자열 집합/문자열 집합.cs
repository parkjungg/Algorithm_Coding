public class Num14425
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = nums[0];
        int M = nums[1];
        int count = 0;
        var hastSet = new HashSet<string>();
        
        for (int i = 0; i < N; i++)
        {
            hastSet.Add(Console.ReadLine());
        }

        for (int i = 0; i < M; i++)
        {
            string q = Console.ReadLine();
            if (hastSet.Contains(q))
            {
                count++;
            }
        }
        Console.WriteLine(count);
    }
}
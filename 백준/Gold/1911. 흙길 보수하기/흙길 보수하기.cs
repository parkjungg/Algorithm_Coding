public class Num1911
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = nums[0];
        int L = nums[1];

        List<(int,int)> info = new List<(int, int)>();
        for (int i = 0; i < N; i++)
        {
            int[] len = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int start = len[0];
            int end = len[1];
            info.Add((start, end));
        }
        
        info.Sort((a, b) => a.CompareTo(b));

        int ans = 0;
        int pos = 0;

        foreach (var (start, end) in info)
        {
            int newStart = Math.Max(pos, start);
            if (newStart < end)
            {
                int lengthToCover = end - newStart;
                int count = (lengthToCover + L - 1) / L;
                ans += count;
                pos = newStart + count * L;
            }
        }
        Console.WriteLine(ans);
    }
}
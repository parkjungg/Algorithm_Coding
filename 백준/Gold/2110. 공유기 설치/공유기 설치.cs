public class Num2110
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = nums[0];
        int C = nums[1];

        int[] pos = new int[N];
        for (int i = 0; i < N; i++)
        {
            pos[i] = int.Parse(Console.ReadLine());
        }
        Array.Sort(pos);

        int left = 1;
        int right = pos[N - 1] - pos[0];
        int ans = 0;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            int count = 1;
            int last = pos[0];

            for (int i = 1; i < N; i++)
            {
                if (pos[i] - last >= mid)
                {
                    count++;
                    last = pos[i];
                }
            }

            if (count >= C)
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
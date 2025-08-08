public class Num16987
{
    private static int N;
    private static List<(int, int)> info = new List<(int, int)>();
    private static int count = 0;
    public static void Main(string[] args)
    {
        N = int.Parse(Console.ReadLine());
        for (int i = 0; i < N; i++)
        {
            int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int S = nums[0];
            int W = nums[1];
            
            info.Add((S, W));
        }
        BackTracking(0);
        Console.WriteLine(count);
    }

    private static void BackTracking(int index)
    {

        if (index == N)
        {
            int brokenCount = info.Count(e => e.Item1 <= 0);
            count = Math.Max(brokenCount, count);
            return;
        }

        if (info[index].Item1 <= 0)
        {
            BackTracking(index + 1);
            return;
        }

        bool hit = false;
        for (int i = 0; i < N; i++)
        {
            if(i == index || info[i].Item1 <= 0) continue;

            hit = true;

            var attacker = info[index];
            var target = info[i];
            
            info[index] = (attacker.Item1 - target.Item2, attacker.Item2);
            info[i] = (target.Item1 - attacker.Item2, target.Item2);
            
            BackTracking(index + 1);
            
            info[index] = attacker;
            info[i] = target;
        }

        if (!hit)
        {
            BackTracking(index + 1);
        }

    }
}
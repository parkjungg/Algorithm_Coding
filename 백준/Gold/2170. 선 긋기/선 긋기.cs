public class Num2170
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        List<int[]> pos = new List<int[]>();
        
        for (int i = 0; i < N; i++)
        {
            int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            pos.Add(nums);
        }        
        
        pos.Sort((a, b) =>
        {
            if(a[0] == b[0]) return a[1].CompareTo(b[1]);
            else return a[0].CompareTo(b[0]);
        });

        int start = pos[0][0];
        int end = pos[0][1];
        int len = end - start;

        for (int i = 1; i < N; i++)
        {
            if(pos[i][0] >= start && pos[i][1] <= end) continue;
            else if (pos[i][0] >= end)
            {
                len += pos[i][1] - pos[i][0];
            }
            else
            {
                len += (pos[i][1] - end);
            }

            start = pos[i][0];
            end = pos[i][1];
        }
        
        Console.WriteLine(len);
    }
}
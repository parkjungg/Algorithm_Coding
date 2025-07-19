public class Num1713
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int M = int.Parse(Console.ReadLine());
        int[] upCount = Console.ReadLine().Split().Select(int.Parse).ToArray();
        
        List<int> frame = new List<int>();
        Dictionary<int, int> vote = new Dictionary<int, int>();
        Dictionary<int, int> time = new Dictionary<int, int>();

        int nowTime = 0;
        foreach (var student in upCount)
        {
            nowTime++;
            if (frame.Contains(student))
            {
                vote[student]++;
            }
            else
            {
                if (frame.Count < N)
                {
                    frame.Add(student);
                    vote[student] = 1;
                    time[student] = nowTime;
                }
                else
                {
                    int removeTarget = frame.OrderBy(x => vote[x]).ThenBy(x => time[x]).First();
                    frame.Remove(removeTarget);
                    vote.Remove(removeTarget);
                    time.Remove(removeTarget);
                    
                    frame.Add(student);
                    vote[student] = 1;
                    time[student] = nowTime;
                }
            }
        }
        frame.Sort();
        Console.WriteLine(string.Join(" ", frame));
        
        
    }
}
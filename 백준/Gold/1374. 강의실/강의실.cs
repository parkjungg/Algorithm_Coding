public class Num1374
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        PriorityQueue<(int, int), int> pq = new PriorityQueue<(int, int), int>();
        for (int i = 0; i < N; i++)
        {
            int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int start = nums[1];
            int end = nums[2];
            pq.Enqueue((start, end), start);
        }

        PriorityQueue<int, int> endMinHeap = new();
        int count = 0;
        while (pq.Count > 0)
        {
            var (start, end) = pq.Dequeue();
            while (endMinHeap.Count > 0 && endMinHeap.Peek() <= start)
            {
                endMinHeap.Dequeue();
            }
            endMinHeap.Enqueue(end, end);

            if (count < endMinHeap.Count)
            {
                count = endMinHeap.Count;
            }
        }
        Console.WriteLine(count);
    }
}
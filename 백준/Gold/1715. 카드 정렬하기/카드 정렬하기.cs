public class Num1715
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        var pq = new PriorityQueue<int, int>();
        
        for (int i = 0; i < N; i++)
        {
            int num = int.Parse(Console.ReadLine());
            pq.Enqueue(num, num);
        }

        if (pq.Count <= 1)
        {
            Console.WriteLine(0);
            return;
        }

        long ans = 0;
        while (pq.Count > 1)
        {
            int a = pq.Dequeue();
            int b = pq.Dequeue();
            int sum = a + b;
            ans += sum;
            pq.Enqueue(sum, sum);
        }
        Console.WriteLine(ans);
    }
}

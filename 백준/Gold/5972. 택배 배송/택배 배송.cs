using System.Collections;

public class Num5972
{
    private static int N, M;
    private static List<(int, int)>[] road;
    private static bool[] visited;
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        N = nums[0];
        M = nums[1];
        
        visited = new bool[N + 1];
        road = new List<(int, int)>[N + 1];
        for (int i = 1; i <= N; i++)
        {
            road[i] = new List<(int, int)>();
        }

        for (int i = 0; i < M; i++)
        {
            int[] numbers = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int A = numbers[0];
            int B = numbers[1];
            int cost = numbers[2];

            road[A].Add((B, cost));
            road[B].Add((A, cost));
        }
        Dijkstra(1);
        
    }

    private static void Dijkstra(int start)
    {
        int[] dist = new int[N + 1];
        for (int i = 1; i <= N; i++)
        {
            dist[i] = int.MaxValue;
        }

        dist[start] = 0;
        
        PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
        pq.Enqueue(start, 0);

        while (pq.Count > 0)
        {
            int node = pq.Dequeue();
            visited[node] = true;

            foreach (var (next, cost) in road[node])
            {
                if (dist[next] > dist[node] + cost)
                {
                    dist[next] = dist[node] + cost;
                    pq.Enqueue(next, dist[next]);
                }
            }
        }
        Console.WriteLine(dist[N]);
    }
}
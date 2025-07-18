public class Num6118
{
    private static int N, M;
    private static List<int>[] graph;
    private static int[] distance;
    private static bool[] visited;
    
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        N = nums[0];
        M = nums[1];

        graph = new List<int>[N + 1];
        visited = new bool[N + 1];
        distance = new int[N + 1];
        
        for (int i = 1; i <= N; i++)
        {
            graph[i] = new List<int>();
        }
        for (int i = 0; i < M; i++)
        {
            int[] nums2 = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int A = nums2[0];
            int B = nums2[1];
            graph[A].Add(B);
            graph[B].Add(A);
        }
        
        Array.Fill(distance, -1);
        BFS(1);
    }

    private static void BFS(int start)
    {
        Queue<int> queue = new Queue<int>();
        visited[start] = true;
        distance[start] = 0;
        queue.Enqueue(start);
        
        while (queue.Count > 0)
        {
            int current = queue.Dequeue();
            foreach (var cur in graph[current])
            {
                if (!visited[cur])
                {
                    visited[cur] = true;
                    distance[cur] = distance[current] + 1;
                    queue.Enqueue(cur);
                }
            }
        }

        int maxDistance = distance.Max();
        int farthest = -1;
        int count = 0;

        for (int i = 1; i <= N; i++)
        {
            if (distance[i] == maxDistance)
            {
                if (farthest == -1 || i < farthest)
                {
                    farthest = i;
                }
                count++;
            }
        }
        Console.WriteLine($"{farthest} {maxDistance} {count}");
    }
}
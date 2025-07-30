public class Num1240
{
    private static int N, M;
    private static List<(int, int)>[] graph;
    private static bool[] visited;
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        N = nums[0];
        M = nums[1];
        
        graph = new List<(int, int)>[N + 1];
        
        for (int i = 1; i <= N ; i++)
        {
            graph[i] = new List<(int, int)>();
        }

        for (int i = 0; i < N - 1; i++)
        {
            int[] info = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int A = info[0];
            int B = info[1];
            int dist = info[2];
            
            graph[A].Add((B, dist));
            graph[B].Add((A, dist));
        }

        for (int i = 0; i < M; i++)
        {
            int[] pair = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int start = pair[0];
            int end = pair[1];
            
            int result = BFS(start, end);
            Console.WriteLine(result);
        }
        
        
    }

    private static int BFS(int start, int end)
    {
        Queue<(int, int)> queue = new Queue<(int, int)>();
        visited = new bool[N + 1];
        visited[start] = true;
        queue.Enqueue((start, 0));


        while (queue.Count > 0)
        {
            var (cur, dist) = queue.Dequeue();
            if (cur == end) return dist;
            foreach (var (next, cost) in graph[cur])
            {
                if (!visited[next])
                {
                    visited[next] = true;
                    queue.Enqueue((next, dist + cost));
                }
            }
        }

        return -1;
    }
}
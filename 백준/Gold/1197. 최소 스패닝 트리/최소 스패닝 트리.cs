public class Num1197
{
    private static int V, E;
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        V = nums[0];
        E = nums[1];

        var graph = new List<(int, int)>[V + 1];

        for (int i = 1; i <= V; i++)
        {
            graph[i] = new List<(int,int)>();
        }
        for (int i = 0; i < E; i++)
        {
            int[] info = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
            int A = info[0];
            int B = info[1];
            int C = info[2];
            
            graph[A].Add((B, C));
            graph[B].Add((A, C));
        }
        
        bool[] visited = new bool[V + 1];
        long ans = 0;
        int picked = 0;
        
        var pq = new PriorityQueue<(int w, int v), int>();
        visited[1] = true;
        picked = 1;

        foreach (var (to, w) in graph[1])
        {
            pq.Enqueue((w, to), w);
        }

        while (picked < V && pq.Count > 0)
        {
            var (w, v) = pq.Dequeue();
            if(visited[v]) continue;
            
            visited[v] = true;
            picked++;
            ans += w;

            foreach (var (to, ww) in graph[v])
            {
                if(!visited[to]) pq.Enqueue((ww, to), ww); 
            }
        }
        
        Console.WriteLine(ans);
    }
}
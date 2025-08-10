using System.Text;
public class Num1753
{
    private static List<(int v, int w)>[] graph;
    
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int V = nums[0];
        int E = nums[1];
        
        int K = int.Parse(Console.ReadLine());

        graph = new List<(int v, int w)>[V + 1];
        for (int i = 1; i <= V; i++)
        {
            graph[i] = new List<(int v, int w)>();
        }
        for (int i = 0; i < E; i++)
        {
            int[] info = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int u = info[0]; int v = info[1]; int w = info[2];
            graph[u].Add((v, w));
        }
        const int INF = int.MaxValue / 4;
        int[] dist = new int[V + 1];
        for (int i = 1; i <= V; i++)
        {
            dist[i] = INF;
        }

        dist[K] = 0;
        
        PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
        pq.Enqueue(K, dist[K]);

        while (pq.TryDequeue(out int cur, out int curDist))
        {
            // 이미 더 좋은 경로가 있으면 스킵
            if (curDist != dist[cur]) continue;

            foreach (var (to, w) in graph[cur])
            {
                int nd = curDist + w;
                if (nd < dist[to])
                {
                    dist[to] = nd;
                    pq.Enqueue(to, nd);
                }
            }
        }

        var sb = new StringBuilder();
        for (int i = 1; i <= V; i++)
        {
            if (dist[i] == INF) sb.AppendLine("INF");
            else sb.AppendLine(dist[i].ToString());
        }
        Console.Write(sb.ToString());
    }
}
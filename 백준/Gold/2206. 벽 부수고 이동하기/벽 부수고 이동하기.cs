public class Num2206
{
    private static int N, M;
    private static char[,] map;
    private static int[,,] dist;
    private static int[] dx = { 1, -1, 0, 0 };
    private static int[] dy = { 0, 0, 1, -1 };
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        N = nums[0];
        M = nums[1];

        map = new char[N, M];
        dist = new int[N, M, 2];
        
        for (int i = 0; i < N; i++)
        {
            string s = Console.ReadLine();
            for (int j = 0; j < M; j++)
            {
                map[i, j] = s[j];
            }
        }

        int ans = BFS();
        Console.WriteLine(ans);
    }
    private static int BFS()
    {
        Queue<(int x, int y, int b)> q = new Queue<(int x, int y, int b)>();
        q.Enqueue((0, 0, 0));
        dist[0, 0, 0] = 1;

        while (q.Count > 0)
        {
            var cur = q.Dequeue();
            int x = cur.x;
            int y = cur.y;
            int b = cur.b;

            if (x == N - 1 && y == M - 1)
            {
                return dist[x, y, b];
            }

            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i];
                int ny = y + dy[i];

                // 경계 먼저 검사
                if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;

                if (map[nx, ny] == '0'){
                    if (dist[nx, ny, b] == 0)
                    {
                        dist[nx, ny, b] = dist[x, y, b] + 1;
                        q.Enqueue((nx, ny, b));
                    }
                }
                else
                {
                    if (b == 0 && dist[nx, ny, 1] == 0)
                    {
                        dist[nx, ny, 1] = dist[x, y, 0] + 1;
                        q.Enqueue((nx, ny, 1));
                    }
                }
            }
        }

        return -1;
    }
}
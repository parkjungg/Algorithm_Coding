public class Num14502
{
    private static int N, M;
    private static int[,] map;
    private static int[] dx = { 1, -1, 0, 0 };
    private static int[] dy = { 0, 0, 1, -1 };
    private static int size = 0;
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        N = nums[0];
        M = nums[1];

        map = new int[N, M];

        for (int i = 0; i < N; i++)
        {
            int[] info = Console.ReadLine().Split().Select(int.Parse).ToArray();
            for (int j = 0; j < M; j++)
            {
                map[i, j] = info[j];
            }
        }

        BackTracking(0);
        Console.WriteLine(size);
    }

    private static void BackTracking(int depth)
    {
        if (depth == 3)
        {
            BFS();
            return;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (map[i, j] == 0)
                {
                    map[i, j] = 1;
                    BackTracking(depth + 1);
                    map[i, j] = 0;
                }
            }
        }
    }

    private static void BFS()
    {
        Queue<(int, int)> queue = new Queue<(int, int)>();
        int[,] copyMap = (int[,])map.Clone();

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (copyMap[i, j] == 2)
                {
                    queue.Enqueue((i, j));
                }
            }
        }

        while (queue.Count > 0)
        {
            var (curX, curY) = queue.Dequeue();
            for (int i = 0; i < 4; i++)
            {
                int nx = curX + dx[i];
                int ny = curY + dy[i];
                if (nx >= 0 && nx < N && ny >= 0 && ny < M && copyMap[nx, ny] == 0)
                {
                    copyMap[nx, ny] = 2;
                    queue.Enqueue((nx, ny));
                }
            }
        }
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (copyMap[i, j] == 0)
                {
                    count++;
                }
            }
        }
        size = Math.Max(size, count);
        
    }
}
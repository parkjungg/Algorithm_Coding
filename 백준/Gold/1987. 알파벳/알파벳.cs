public class Num1987
{
    private static int R, C, result;
    private static char[,] board;
    private static bool[] used = new bool[26];
    private static int[] dx = { 1, -1, 0, 0 };
    private static int[] dy = { 0, 0, 1, -1 };

    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
        R = nums[0];
        C = nums[1];

        board = new char[R, C];
        
        for (int i = 0; i < R; i++)
        {
            string s = Console.ReadLine();
            for (int j = 0; j < C; j++)
            {
                board[i, j] = s[j];
            }
        }

        used[board[0, 0] - 'A'] = true;
        BackTracking(0, 0, 1);
        Console.WriteLine(result);
    }

    private static void BackTracking(int x, int y, int depth)
    {
        if(depth > result) result = depth;

        for (int i = 0; i < 4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < R && ny >= 0 && ny < C)
            {
                int idx = board[nx, ny] - 'A';
                if(used[idx]) continue;

                used[idx] = true;
                BackTracking(nx, ny, depth + 1);
                used[idx] = false;
            }
        }
    }
}
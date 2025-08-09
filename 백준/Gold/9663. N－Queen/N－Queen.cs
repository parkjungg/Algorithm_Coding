public class Num9663
{
    private static int[] arr;
    private static int N;
    private static int count = 0;
    public static void Main(string[] args)
    {
        N = int.Parse(Console.ReadLine());
        arr = new int[N];
        
        BackTracking(0);
        Console.WriteLine(count);
    }

    private static void BackTracking(int index)
    {
        if (index == N)
        {
            count++;
            return;
        }

        for (int i = 0; i < N; i++)
        {
            arr[index] = i;
            if (CheckPos(index))
                
            {
                BackTracking(index + 1);
            }
        }
    }

    private static bool CheckPos(int col)
    {
        for (int i = 0; i < col; i++)
        {
            if (arr[col] == arr[i])
            {
                return false;
            }
            else if (Math.Abs(col - i) == Math.Abs(arr[col] - arr[i]))
            {
                return false;
            }
        }
        return true;
    }
}
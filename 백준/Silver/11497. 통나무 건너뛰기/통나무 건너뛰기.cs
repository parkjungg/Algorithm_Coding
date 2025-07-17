// Silver 1 통나무 건너뛰기
public class Num11497
{
    public static void Main(string[] args)
    {
        int T = int.Parse(Console.ReadLine());
        for (int i = 0; i < T; i++)
        {
            int N = int.Parse(Console.ReadLine());
            int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
            int[] newArr = new int[N];

            Array.Sort(arr);

            int left = 0, right = N - 1;
            for (int j = 0; j < N; j++)
            {
                if (j % 2 == 0)
                {
                    newArr[left++] = arr[j];
                }
                else
                {
                    newArr[right--] = arr[j];
                }
            }
            
            int max = Int32.MinValue;
            for (int j = 0; j < N - 1; j++)
            {
                int diff = Math.Abs(newArr[j] - newArr[j + 1]);
                max = Math.Max(max, diff);
            }
            
            Console.WriteLine(max);
        }
    }
}

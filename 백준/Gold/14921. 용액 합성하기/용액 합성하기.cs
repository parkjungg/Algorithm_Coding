public class Num14921
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray();

        int left = 0;
        int right = N - 1;
        
        int min = int.MaxValue;

        while (left < right)
        {
            int sum = arr[left] + arr[right];
            if (Math.Abs(sum) < Math.Abs(min))
            {
                min = sum;
            }

            if (sum == 0) break;
            else if (sum < 0) left++;
            else right--;
        }

        Console.WriteLine(min);
    }
}
public class Num2217
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] arr = new int[N];
        for (int i = 0; i < N; i++)
        {
            arr[i] = int.Parse(Console.ReadLine());
        }

        Array.Sort(arr);
        int max = 0;
        for (int i = 0; i < N; i++)
        {
            int candidate = arr[i] * (N - i);
            if(candidate > max) max = candidate;
        }
        
        Console.WriteLine(max);
    }
}
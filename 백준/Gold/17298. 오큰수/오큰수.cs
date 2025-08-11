public class Num17298
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] result = new int[N];

        for (int i = 0; i < N; i++)
        {
            result[i] = -1;
        }
        
        Stack<int> stack = new Stack<int>();
        for (int i = 0; i < N; i++)
        {
            while (stack.Count > 0 && arr[stack.Peek()] < arr[i] )
            {
                int idx = stack.Pop();
                result[idx] = arr[i];
            }
            stack.Push(i);
        }
        Console.WriteLine(string.Join(" ", result));
    }
}
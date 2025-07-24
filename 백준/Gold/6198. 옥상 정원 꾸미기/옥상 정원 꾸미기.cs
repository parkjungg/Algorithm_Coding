public class Num6198
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());
        Stack<int> stack = new Stack<int>();
        long count = 0;
        
        for (int i = 0; i < N; i++)
        {
            int height = int.Parse(Console.ReadLine());
            while (stack.Count > 0)
            {
                if (height >= stack.Peek())
                {
                    stack.Pop();
                }
                else break;
            }
            count += stack.Count();
            stack.Push(height);
        }
        Console.WriteLine(count);
    }
}
// 10 3 7 4 12 2 -> top
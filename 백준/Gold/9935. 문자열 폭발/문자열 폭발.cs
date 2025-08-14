public class Num9935
{
    public static void Main(string[] args)
    {
        string s = Console.ReadLine();
        string bomb = Console.ReadLine();
        
        int len = bomb.Length;
        Stack<char> stack = new Stack<char>();

        foreach (char ch in s)
        {
            stack.Push(ch);

            if (stack.Count >= len && stack.Peek() == bomb[len - 1])
            {
                bool match = true;
                char[] temp = new char[len];
                for (int i = len - 1; i>= 0; i--)
                {
                    char c = stack.Pop();
                    temp[i] = c;
                    if (c != bomb[i])
                    {
                        match = false;
                    }
                }

                if (!match)
                {
                    foreach (var c in temp)
                    {
                        stack.Push(c);
                    }
                }
            }
        }
        if (stack.Count == 0)
        {
            Console.WriteLine("FRULA");
        }
        else
        {
            char[] result = stack.ToArray();
            Array.Reverse(result);
            Console.WriteLine(string.Join("", result));
        }
    }
}
public class Num7795
{
    public static void Main(string[] args)
    {
        int T = int.Parse(Console.ReadLine());
        for (int t = 0; t < T; t++)
        {
             int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
             int N = nums[0];
             int M = nums[1];
             
             int[] Aarr = Console.ReadLine().Split().Select(int.Parse).ToArray();
             int[] Barr = Console.ReadLine().Split().Select(int.Parse).ToArray();

             Array.Sort(Aarr);
             Array.Sort(Barr);
             
             int pointer = 0;
             int count = 0;

             for (int i = 0; i < N; i++)
             {
                 while (pointer < M && Aarr[i] > Barr[pointer])
                 {
                     pointer++;
                 }
                 count += pointer;
             }
             Console.WriteLine(count);
        }
    }
}

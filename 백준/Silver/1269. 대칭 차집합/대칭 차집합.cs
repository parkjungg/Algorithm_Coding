public class Num1269
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();

        int N = nums[0];
        int M = nums[1];

        HashSet<int> set = new HashSet<int>();
        
        int[] A = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int[] B = Console.ReadLine().Split().Select(int.Parse).ToArray();
        
        for (int i = 0; i < N; i++)
        {
            if (!set.Contains(A[i]))
            {
                set.Add(A[i]);
            }
            else
            {
                set.Remove(A[i]);
            }
        }
        for (int i = 0; i < M; i++)
        {
            if (!set.Contains(B[i]))
            {
                set.Add(B[i]);
            }
            else
            {
                set.Remove(B[i]);
            }
        }
        
        Console.WriteLine(set.Count);
    }
}
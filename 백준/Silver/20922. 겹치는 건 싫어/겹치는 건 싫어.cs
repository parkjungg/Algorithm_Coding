public class Num20922
{
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        int N = nums[0];
        int K = nums[1];
        
        int[] arr = new int[N];
        int[] countArr = new int[100001];
        int firstPointer = 0;
        int secondPointer = 0;
        int max = Int32.MinValue;
        
        arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
        
        while (firstPointer < arr.Length)
        {
            while (firstPointer < arr.Length && countArr[arr[firstPointer]] + 1 <= K)
            {
                countArr[arr[firstPointer]]++;
                firstPointer++;
            }

            int len = firstPointer - secondPointer;
            max = Math.Max(max, len);
            countArr[arr[secondPointer]]--;
            secondPointer++;
        }
        Console.WriteLine(max);
    }
}
public class Num1253
{
    public static void Main(string[] args)
    {
        int N = int.Parse(Console.ReadLine());

        int[] arr = Console.ReadLine().Split().Select(int.Parse).ToArray();
        Array.Sort(arr);
        
        
        int count = 0;
       for (int i = 0; i < N; i++)
       {
           int left = 0;
           int right = N - 1;
           while (left < right)
           {
               if (left == i)
               {
                   left++;
                   continue;
               }

               if (right == i)
               {
                   right--;
                   continue;
               }
               if (arr[i] > arr[left] + arr[right])
               {
                   left++;
               }
               else if (arr[i] < arr[left] + arr[right])
               {
                   right--;
               }
               else if (arr[i] == arr[left] + arr[right])
               {
                   count++;
                   break;
               }
           }
           
        }
        Console.WriteLine(count);
    }
}
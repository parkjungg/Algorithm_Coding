public class Num17609
{
    public static void Main(string[] args)
    {
        int T = int.Parse(Console.ReadLine());

        for (int i = 0; i < T; i++)
        {
            string s = Console.ReadLine();
            Console.WriteLine(CheckPalindromeType(s));
        }
    }

    private static int CheckPalindromeType(string s)
    {
        int left = 0;
        int right = s.Length - 1;

        while (left < right)
        {
            if (s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                if (IsPalindrome(s, left + 1, right) || IsPalindrome(s, left, right - 1))
                {
                    return 1;
                }
                else
                {
                    return 2;
                }
            }
        }

        return 0;
    }

    private static bool IsPalindrome(string s, int left, int right)
    {
        while (left < right)
        {
            if (s[left] != s[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
}
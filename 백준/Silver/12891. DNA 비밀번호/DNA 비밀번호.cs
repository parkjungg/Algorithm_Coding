public class Num12891
{
    private static int S, P;
    private static int[] ruleNums;
    private static string s;
    private static int[] current = new int[4];
    
    public static void Main(string[] args)
    {
        int[] nums = Console.ReadLine().Split().Select(int.Parse).ToArray();
        S = nums[0];
        P = nums[1];
        
        s = Console.ReadLine();
        ruleNums = Console.ReadLine().Split().Select(int.Parse).ToArray();

        int count = 0;

        for (int i = 0; i < P; i++)
        {
            AddChar(s[i]);
        }

        if (IsValid()) count++;

        for (int i = P; i < S; i++)
        {
            AddChar(s[i]);
            RemoveChar(s[i - P]);
            if (IsValid()) count++;
        }
        
        Console.WriteLine(count);
    }

    private static void AddChar(char c)
    {
        if (c == 'A') current[0]++;
        else if (c == 'C') current[1]++;
        else if (c == 'G') current[2]++;
        else current[3]++;
    }

    private static void RemoveChar(char c)
    {
        if(c == 'A') current[0]--;
        else if (c == 'C') current[1]--;
        else if (c == 'G') current[2]--;
        else current[3]--;
    }

    private static bool IsValid()
    {
        for (int i = 0; i < 4; i++)
        {
            if (ruleNums[i] > current[i]) return false;
        }
        return true;
    }

    
}

// A C G T
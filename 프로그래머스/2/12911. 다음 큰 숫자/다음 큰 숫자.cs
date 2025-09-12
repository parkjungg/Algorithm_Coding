using System;

class Solution 
{
    public int solution(int n) 
    {
        int answer = 0;
        string numS1 = Convert.ToString(n, 2);
        int count = CheckOne(numS1);

        while(true)
        {
            string numS2 = Convert.ToString(n + 1, 2);
            int count1 = CheckOne(numS2);
            if(count == count1)
            {
                answer = n + 1;
                break;
            }
            n++;
        }
        return answer;
    }
    
    private int CheckOne(string s)
    {
        int count = 0;
        for(int i = 0; i < s.Length; i++)
        {
            if(s[i] == '1')
            {
                count++;
            }
        }
        return count;
    }
}
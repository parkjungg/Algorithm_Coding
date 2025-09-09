using System;
using System.Collections.Generic;

public class Solution {
    private char[] chars;
    private bool[] used;
    private HashSet<int> made;
    private List<char> cur;
    public int solution(string numbers) {
        
        chars = numbers.ToCharArray();
        used = new bool[chars.Length];
        made = new HashSet<int>();
        cur = new List<char>();
        
        DFS();
        int answer = 0;
        foreach(int x in made)
        {
            if(IsPrime(x)) answer++;
        }
        return answer;
    }
    private void DFS()
    {
        if(cur.Count > 0)
        {
            int val = int.Parse(new string(cur.ToArray()));
            made.Add(val);
        }
        if(cur.Count == chars.Length) return;
        
        for(int i = 0; i < chars.Length; i++)
        {
            if(!used[i])
            {
                used[i] = true;
                cur.Add(chars[i]);
                DFS();
                cur.RemoveAt(cur.Count - 1);
                used[i] = false;
            }
        }
    }
    
    private bool IsPrime(int n)
    {
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        int r = (int)Math.Sqrt(n);
        for(int i = 3; i <= r; i += 2)
        {
            if(n % i == 0) return false;
        }
        return true;
    }
}
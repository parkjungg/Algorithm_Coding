using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string today, string[] terms, string[] privacies) {
        var db = new Dictionary<string, int>();
        
        foreach(var t in terms)
        {
            var parts = t.Split(' ');
            db[parts[0]] = int.Parse(parts[1]);
        }
        
        int totalDays = ChangeDays(today);
        
        var answer = new List<int>();
        for(int i = 0; i < privacies.Length; i++)
        {
            var parts = privacies[i].Split(' ');
            string days = parts[0];
            string term = parts[1];
            
            int total = ChangeDays(days);
            int month = db[parts[1]];
            
            int expireDay = total + month * 28 - 1;
            
            if(expireDay < totalDays)
            {
                answer.Add(i + 1);
            }
        }
        answer.Sort();
        
        return answer.ToArray();
    }
    
    private int ChangeDays(string yyyymmdd)
    {
        var s = yyyymmdd.Split('.');
        int y = int.Parse(s[0]);
        int m = int.Parse(s[1]);
        int d = int.Parse(s[2]);
        
        return ((y * 12) + (m - 1)) * 28 + d;
    }
}
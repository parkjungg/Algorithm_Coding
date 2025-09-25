using System;
using System.Collections.Generic;

public class Solution {
    public int[] solution(string[] id_list, string[] report, int k) {
        int[] answer = new int[id_list.Length];
        
        var index = new Dictionary<string, int>();
        for(int i = 0; i < id_list.Length; i++)
        {
            index[id_list[i]] = i;
        }
        
        var reportsBy = new Dictionary<string, HashSet<string>>();
        var reportedBy = new Dictionary<string, HashSet<string>>();

        
        foreach(var id in id_list)
        {
            reportsBy[id] = new HashSet<string>();
            reportedBy[id] = new HashSet<string>();
        }
        
        foreach(var s in report)
        {
            var parts = s.Split(' ');
            string reporter = parts[0];
            string target = parts[1];
            
            if(reportsBy[reporter].Add(target))
            {
                reportedBy[target].Add(reporter);
            }
        }
        
        var suspended = new HashSet<string>();
        foreach(var id in id_list)
        {
            if(reportedBy[id].Count >= k) suspended.Add(id);
        }
        
        foreach(var reporter in id_list)
        {
            int mailCount = 0;
            foreach(var target in reportsBy[reporter])
            {
                if(suspended.Contains(target))
                    mailCount++;
            }
            answer[index[reporter]] = mailCount;
        }
        return answer;
    }
}
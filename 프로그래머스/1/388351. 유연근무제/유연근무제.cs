using System;

public class Solution {
    public int solution(int[] schedules, int[,] timelogs, int startday) {
        int answer = 0;
        for(int i = 0; i < schedules.Length; i++)
        {
            if(Check(startday, schedules[i], timelogs, i)) answer++;
        }
        return answer;
    }
    
    private bool Check(int startday, int time, int[,] timelogs, int idx)
    {
        int untilTime = AddMinutes(time, 10);
        for(int t = 0; t < timelogs.GetLength(1); t++)
        {
            int day = ((startday - 1 + t) % 7) + 1;
            if(day == 6 || day == 7) continue;
            
            int d = timelogs[idx, t];
            if(d > untilTime) return false;
        }
        return true;
    }
    private int AddMinutes(int hhmm, int minutes)
    {
        int h = hhmm / 100;
        int m = hhmm % 100;
        m += minutes;
        h += m / 60;
        m %= 60;
        
        return h * 100 + m;
    }
}
using System;

public class Solution {
    public string solution(string video_len, string pos, string op_start, string op_end, string[] commands) {
        int len  = ToSeconds(video_len);
        int cur  = ToSeconds(pos);
        int opS  = ToSeconds(op_start);
        int opE  = ToSeconds(op_end);
        
        if(cur >= opS && cur <= opE) cur = opE;
        foreach(var cmd in commands)
        {
            if(cmd == "next")
            {
                cur = Math.Min(len, cur + 10);
            }
            else if(cmd == "prev")
            {
                cur = Math.Max(0, cur - 10);
            }
            
            if(cur >= opS && cur <= opE) cur = opE;
        }
        return ToMMSS(cur);
    }
    
    private int ToSeconds(string mmss)
    {
        var parts = mmss.Split(':');
        int m = int.Parse(parts[0]);
        int s = int.Parse(parts[1]);
        return m * 60 + s;
    }
    private string ToMMSS(int time)
    {
        int m = time / 60;
        int s = time % 60;
        return $"{m:D2}:{s:D2}";
    }
}
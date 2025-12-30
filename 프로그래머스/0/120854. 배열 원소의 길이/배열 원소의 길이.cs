using System;

public class Solution {
    public int[] solution(string[] strlist) {
        int[] answer = new int[strlist.Length];
        int idx = 0;
        foreach(var s in strlist)
        {
            answer[idx++] = s.Length;
        }
        return answer;
    }
}
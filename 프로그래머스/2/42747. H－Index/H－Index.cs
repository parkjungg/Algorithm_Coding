using System;

public class Solution {
    public int solution(int[] citations) {
        int answer = 0;
        int n = citations.Length;
        Array.Sort(citations);
        
        for(int i = 0; i < n; i++)
        {
            int hIndex = n - i;
            if(hIndex <= citations[i])
            {
                answer = hIndex;
                break;
            }
        }
        return answer;
    }
}
// 0 1 3 5 6
// 0 5
// 1 4
// 2 3
// 3 3
// 4 2
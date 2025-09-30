public class Solution {
    public long solution(long n) {
        long answer = 0;
        long cur = 1;
        while(cur * cur <= n)
        {
            if(n == cur * cur)
            {
                answer = (cur + 1) * (cur + 1);
                return answer;
            }
            cur++;
        }
        return -1;
    }
}
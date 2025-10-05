public class Solution {
    public int[] solution(int n, int m) {
        int[] answer = new int[2];
        answer[0] = GCD(n, m);
        answer[1] = LCM(n, m);
        return answer;
    }
    
    private int GCD(int a, int b)
    {
        while(b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    private int LCM(int a, int b)
    {
        return (a * b) / GCD(a, b);
    }
}
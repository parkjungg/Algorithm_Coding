public class Solution {
    public int solution(int[] arr) {
        int answer = 0;
        int first = arr[0];
        answer = LCM(first , arr[1]);
        
        for(int i = 1; i < arr.Length - 1; i++)
        {
            answer = LCM(answer, arr[i + 1]);
        }
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
public class Solution {
    public double solution(int[] arr) {
        double answer = 0;
        int len = arr.Length;
        foreach(var n in arr)
        {
            answer += n;
        }
        answer = (double)(answer / len);
        return answer;
    }
}
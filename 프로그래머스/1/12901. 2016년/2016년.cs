public class Solution {
    public string solution(int a, int b) {
        int[] month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string[] day = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
        
        int total = 0;
        for(int i = 0; i < a - 1; i++)
        {
            total += month[i];
        }
        total += b - 1;
        string answer = day[total % 7];
        return answer;
    }
}
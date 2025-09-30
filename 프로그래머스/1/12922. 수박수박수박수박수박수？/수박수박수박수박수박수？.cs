public class Solution {
    public string solution(int n) {
        string answer = "";
        string[] arr = {"수", "박"};
        
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0) answer += arr[0];
            else answer += arr[1];
        }
        return answer;
    }
}
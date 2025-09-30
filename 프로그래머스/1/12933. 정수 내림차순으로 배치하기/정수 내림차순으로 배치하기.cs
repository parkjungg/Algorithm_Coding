using System; 
public class Solution {
    public long solution(long n) {
        string s = n.ToString();
        char[] arr = s.ToCharArray();
        Array.Sort(arr, (a, b) => b.CompareTo(a));
        string sort = new string(arr);
        long answer = long.Parse(sort);
        
        return answer;
    }
}
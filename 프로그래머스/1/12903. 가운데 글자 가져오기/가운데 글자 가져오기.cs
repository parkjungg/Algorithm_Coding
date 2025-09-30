public class Solution {
    public string solution(string s) {
        int len = s.Length;
        if(len % 2 == 1)
        {
            return s[len / 2].ToString();
        }
        else
        {
            return s[len / 2 - 1].ToString() + s[len / 2].ToString();
        }
    }
}
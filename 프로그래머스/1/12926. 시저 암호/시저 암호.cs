using System.Text;
public class Solution {
    public string solution(string s, int n) {
        StringBuilder answer = new StringBuilder();
        for(int i = 0; i < s.Length; i++)
        {
            char c = s[i];
            if(c == ' ') answer.Append(' ');
            else if(char.IsUpper(c))
            {
                char shifted = (char)((c - 'A' + n) % 26 + 'A');
                answer.Append(shifted);
            }
            else if(char.IsLower(c))
            {
                char shifted = (char)((c - 'a' + n) % 26 + 'a');
                answer.Append(shifted);
            }
        }
        return answer.ToString();
    }
}
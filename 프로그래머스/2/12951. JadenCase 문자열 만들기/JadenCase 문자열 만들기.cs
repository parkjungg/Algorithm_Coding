public class Solution {
    public string solution(string s) {
        
        string[] words = s.Split(' ');
        for(int i = 0; i < words.Length; i++)
        {
            if(words[i].Length > 0)
            {
                words[i] = char.ToUpper(words[i][0]) + words[i].Substring(1).ToLower();
            }
        }

        
        return string.Join(" ",  words);
    }
}
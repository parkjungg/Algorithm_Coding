public class Solution {
    public string solution(string phone_number) {
        int len = phone_number.Length;
        string front = new string('*', len - 4);
        string last = phone_number.Substring(len - 4);
        return front + last;
    }
}
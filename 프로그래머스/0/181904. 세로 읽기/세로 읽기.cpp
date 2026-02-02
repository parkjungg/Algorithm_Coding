#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    int len = my_string.size() / m;
    int start = 0;
    vector<string> arr; // ["afe", "fiws", ...]
    for(int i = 0; i < len; i++)
    {
        arr.push_back(my_string.substr(start, m));
        start += m;
    }
    for(int i = 0; i < arr.size(); i++)
    {
        string s = arr[i];
        answer += s[c - 1];
    }
    
    return answer;
}
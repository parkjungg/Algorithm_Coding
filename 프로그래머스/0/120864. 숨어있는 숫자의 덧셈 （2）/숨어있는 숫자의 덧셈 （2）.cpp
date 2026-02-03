#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp = "";
    vector<string> arr;
    for(char c : my_string)
    {
        if(c >= '0' && c <= '9')
        {
            temp += c;
        }
        else
        {
            if(!temp.empty())
            {
                arr.push_back(temp);
                temp = "";
            }
        }
    }
    if(!temp.empty())
    {
        arr.push_back(temp);
    }
    for(string s : arr)
    {
        answer += stoi(s);
    }
    return answer;
}
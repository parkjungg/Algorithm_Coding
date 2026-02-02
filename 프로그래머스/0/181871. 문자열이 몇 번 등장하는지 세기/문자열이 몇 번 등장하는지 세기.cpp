#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    int start = 0;
    while((start = myString.find(pat, start)) != string::npos)
    {
        answer++;
        start++;
    }
    return answer;
}
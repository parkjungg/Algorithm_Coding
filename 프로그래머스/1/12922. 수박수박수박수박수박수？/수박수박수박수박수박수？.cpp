#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    if(n == 1) return "수";
    int num = n / 2;
    string answer = "";
    
    for(int i = 0; i < num; i++)
    {
        answer += "수박";
    }
    return n % 2 == 0 ? answer : answer += "수";
}
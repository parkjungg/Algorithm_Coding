#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    
    while(n > 0)
    {
        int r = n % 3;
        n /= 3;
        
        if(r == 0)
        {
            r = 4;
            n--;
        }
        answer = to_string(r) + answer;
    }
    return answer;
}
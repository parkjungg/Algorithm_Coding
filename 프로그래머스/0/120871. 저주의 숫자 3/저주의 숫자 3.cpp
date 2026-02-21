#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int num = 0;
    int cnt = 0;
    
    while(cnt < n)
    {
        num++;
        
        if(num % 3 == 0 || to_string(num).find("3") != string::npos)
            continue;
        
        cnt++;
    }
    return num;
}
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<string> day = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> month = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int total = b - 1;
    for(int i = 0; i < a - 1; i++)
    {
        total += month[i];
    }
    return day[total % 7];
}
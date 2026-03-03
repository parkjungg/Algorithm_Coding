#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int n = s.size();
    string ans = "";
    if(n % 2 == 1)
    {
        return ans += s[n / 2];
    }
    else
    {
        ans += s[n / 2 - 1];
        ans += s[n / 2];        
        return ans;
    }
}
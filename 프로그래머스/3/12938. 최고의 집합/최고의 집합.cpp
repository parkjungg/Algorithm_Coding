#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    
    if(n > s) return {-1};
    
    int base = s / n;
    int remain = s % n;
    
    vector<int> answer(n, base);
    
    
    for(int i = n - 1; i >= n - remain; i--)
    {
        answer[i]++;
    }
    return answer;
}
// 4 5
// 4 4
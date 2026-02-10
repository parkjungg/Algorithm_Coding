#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int min = 100;
    for(int i : array)
    {
        int num = abs(i - n);
        if(num < min || (i < answer && num == min))
        {
            answer = i;
            min = num;
        }
    }
    return answer;
}
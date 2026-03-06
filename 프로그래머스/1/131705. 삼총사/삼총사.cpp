#include <string>
#include <vector>

using namespace std;

int ret = 0;
vector<int> numbers;
void BackTracking(int start, int depth, int sum)
{
    if(depth == 3)
    {
        if(sum == 0) ret++;
        return;
    }
    for(int i = start; i < numbers.size(); i++)
    {
        BackTracking(i + 1, depth + 1, sum + numbers[i]);
    }
}
int solution(vector<int> number) {
    numbers = number;
    BackTracking(0, 0, 0);
    return ret;
}
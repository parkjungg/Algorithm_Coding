#include <string>
#include <vector>

using namespace std;

int answer;
void BackTracking(vector<int> numbers, int target, int idx, int sum)
{
    if(idx == numbers.size())
    {
        if(target == sum)
            answer++;
        return;
    }
    BackTracking(numbers, target, idx + 1, sum + numbers[idx]);
    BackTracking(numbers, target, idx + 1, sum - numbers[idx]);  
}
int solution(vector<int> numbers, int target) {
    BackTracking(numbers, target, 0, 0);
    return answer;
}
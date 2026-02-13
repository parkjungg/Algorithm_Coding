#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int idx = ((k - 1) * 2) % numbers.size();
    return numbers[idx];
}
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int a1 = 0;
    int a2 = 1;
    for(int i : num_list)
    {
        a1 += i;
    }
    a1 = a1 * a1;
    for(int i : num_list)
    {
        a2 *= i;
    }
    return a1 > a2 ? 1 : 0;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int len = arr.size();
    int temp = 1;
    
    while(temp < len)
    {
        temp *= 2;
    }
    while(arr.size() < temp) arr.push_back(0);
    
    return arr;
}
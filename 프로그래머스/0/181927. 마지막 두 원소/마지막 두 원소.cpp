#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int len = num_list.size();
    if(num_list[len - 1] > num_list[len - 2]) num_list.push_back(num_list[len - 1] - num_list[len - 2]);
    else num_list.push_back(num_list[len - 1] * 2);
    return num_list;
}
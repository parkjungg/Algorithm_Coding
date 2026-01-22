#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string s1 = "";
    string s2 = "";
    for(int i : num_list)
    {
        if(i % 2 == 0)
        {
            s2 += to_string(i);
        }
        else s1 += to_string(i);
    }
    return stoi(s1) + stoi(s2);
}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> num_list) {
    int len = num_list.size();
    int sum = 1;
    if(len >= 11) return accumulate(num_list.begin(), num_list.end(), 0);
    else
    {
        for(int i = 0; i < len; i++)
        {
            sum *= num_list[i];
        }
        return sum;
    }
}
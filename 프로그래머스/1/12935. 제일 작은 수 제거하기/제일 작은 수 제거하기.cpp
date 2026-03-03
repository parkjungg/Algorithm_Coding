#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size() == 1)
        return {-1};
    
    int n = *min_element(arr.begin(), arr.end());
    arr.erase(find(arr.begin(), arr.end(), n));
    return arr;
}
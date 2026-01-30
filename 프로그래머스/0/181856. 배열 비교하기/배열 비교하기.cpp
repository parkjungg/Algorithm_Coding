#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int len1 = arr1.size();
    int len2 = arr2.size();
    
    if(len1 > len2) return 1;
    else if(len1 < len2) return -1;
    else
    {
        int size1 = accumulate(arr1.begin(), arr1.end(), 0);
        int size2 = accumulate(arr2.begin(), arr2.end(), 0);
        if(size1 > size2) return 1;
        else if(size1 < size2) return -1;
        else return 0;
    }
}
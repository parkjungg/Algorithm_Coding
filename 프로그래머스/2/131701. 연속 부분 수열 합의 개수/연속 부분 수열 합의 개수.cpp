#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> elements) {
    set<int> sums;
    int n = elements.size();
    vector<int> arr = elements;
    
    for(int i = 0; i < n; i++)
    {
        arr.push_back(elements[i]);
    }
    
    for(int i = 1; i <= n; i++)
    {
        int sum = 0;
        for(int j = 0; j < i; j++)
        {
            sum += arr[j];
        }
        sums.insert(sum);
        
        for(int j = 1; j < n; j++)
        {
            sum -= arr[j - 1];
            sum += arr[j + i - 1];
            sums.insert(sum);
        }
    }
    return sums.size();
}
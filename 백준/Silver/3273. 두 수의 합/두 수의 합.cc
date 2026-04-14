#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int n, num, x, ret;
vector<int> arr;
int main() {
    
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    cin >> x;
    
    sort(arr.begin(), arr.end());
    
    int l = 0, r = arr.size() - 1;
    
    while(l < r)
    {
        if(arr[l] + arr[r] < x) l++;
        else if(arr[l] + arr[r] > x) r--;
        else
        {
            ret++;
            l++;
            r--;
        }
    }
    cout << ret << '\n';
    return 0;
}
// 1 2 3 5 7 9 10 11 12
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, arr[1000001];
bool visited[1000001];
long long ret;

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int l = 0;
    
    for(int r = 0; r < n; r++)
    {
        while(visited[arr[r]])
        {
            visited[arr[l]] = false;
            l++;
        }
        visited[arr[r]] = true;
        ret += (r - l) + 1;
    }
    
    cout << ret;
    return 0;
}
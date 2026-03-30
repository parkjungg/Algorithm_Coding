#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X;
    cin >> X;
    
    int cnt = 0;
    
    while(X > 0)
    {
        if(X % 2 == 1)
            cnt++;
        X /= 2;
    }
    cout << cnt;
    return 0;
}
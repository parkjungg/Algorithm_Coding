#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int t, a;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> a;
        int ret = 0;
        for(int j = 5; j <= a; j *= 5)
        {
            ret += a / j;
        }
        cout << ret << "\n";
    }
    return 0;
}
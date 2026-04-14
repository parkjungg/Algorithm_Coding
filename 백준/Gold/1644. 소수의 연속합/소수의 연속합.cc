#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n, l, r, sum, ret;
vector<int> prime;

bool isPrime(int a)
{
    if(a == 0 || a == 1) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    
    for(int i = 3; i * i <= a; i += 2)
    {
        if(a % i == 0) return false;
    }
    return true;
}
int main()
{
    cin >> n;
    
    for(int i = 2; i <= n; i++)
    {
        if(isPrime(i))
            prime.push_back(i);
    }
    
    while(true)
    {
        if(sum >= n)
        {
            sum -= prime[l];
            l++;
        }
        else
        {
            if(r == prime.size()) break;
            sum += prime[r];
            r++;
        }
        if(sum == n) ret++;
    }
    cout << ret;
    
    return 0;
}
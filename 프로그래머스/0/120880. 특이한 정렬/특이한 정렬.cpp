#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int target;

bool cmp(int a, int b)
{
    if(abs(a - target) == abs(b - target))
        return a > b;
    return abs(a - target) < abs(b - target);
}

vector<int> solution(vector<int> numlist, int n) {
    target = n;
    sort(numlist.begin(), numlist.end(), cmp);
    return numlist;
}
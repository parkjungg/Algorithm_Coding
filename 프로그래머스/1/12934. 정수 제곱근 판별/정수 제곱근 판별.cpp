#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = sqrt(n);
    if(answer * answer == n) return pow(answer + 1, 2);
    else return -1;
}
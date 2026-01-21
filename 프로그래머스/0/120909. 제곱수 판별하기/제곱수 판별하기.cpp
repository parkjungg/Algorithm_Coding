#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = sqrt(n);
    if(answer * answer == n) return 1;
    else return 2;
}
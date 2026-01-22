#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    int a1 = stoi(to_string(a) + to_string(b));
    int a2 = a * b * 2;
    return a1 > a2 ? a1 : a2;
}
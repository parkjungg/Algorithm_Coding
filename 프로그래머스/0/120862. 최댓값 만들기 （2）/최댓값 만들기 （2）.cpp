#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int a1 = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];
    int a2 = numbers[0] * numbers[1];
    return a1 > a2 ? a1 : a2;
}
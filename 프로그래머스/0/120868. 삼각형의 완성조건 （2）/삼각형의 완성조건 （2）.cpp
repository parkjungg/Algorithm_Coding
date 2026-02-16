#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> sides) {
    sort(sides.begin(), sides.end());
    
    int a = sides[0];
    int b = sides[1];
    return 2 * a - 1;
}


// 1. x가 가장 긴 변
// x < a + b
// b <= x < a + b
// -> a개

// 2. b가 가장 긴 변
// b < a + x
// b - a < x < b
// -> a - 1개
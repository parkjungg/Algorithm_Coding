#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(string before, string after) {
    map<char, int> mp1;
    map<char, int> mp2;
    for(char c : before)
    {
        mp1[c]++;
    }
    for(char c : after)
    {
        mp2[c]++;
    }
    return mp1 == mp2 ? 1 : 0;
}
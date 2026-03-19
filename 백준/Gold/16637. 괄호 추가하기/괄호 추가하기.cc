#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n;
string s;
vector<int> num;
vector<char> op;
int ret = -1000000;

int calc(int a, int b, char oper)
{
    if(oper == '+') return a + b;
    else if(oper == '-') return a - b;
    return a * b;
}

void dfs(int idx, int cur)
{
    if(idx == op.size())
    {
        ret = max(ret, cur);
        return;
    }
    
    int sum = calc(cur, num[idx + 1], op[idx]);
    dfs(idx + 1, sum);
    
    if(idx + 1 < op.size())
    {
        int bracket = calc(num[idx + 1], num[idx + 2], op[idx + 1]);
        int withBracket = calc(cur, bracket, op[idx]);
        dfs(idx + 2, withBracket);
    }
}
int main()
{
    cin >> n;
    cin >> s;
    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0) num.push_back(s[i] - '0');
        else op.push_back(s[i]);
    }
    
    dfs(0, num[0]);
    
    cout << ret << '\n';
    
    return 0;
}
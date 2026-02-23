// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    
    vector<int> time(101, 0);
    for(int i = 0; i < 3; i++)
    {
        int start, end;
        cin >> start >> end;
        
        for(int j = start; j < end; j++)
        {
            time[j]++;
        }
    }
    int total = 0;
    
    for(int i = 1; i <= 100; i++)
    {
        if(time[i] == 1)
        {
            total += A;
        }
        else if(time[i] == 2)
        {
            total += B * 2;
        }
        else if(time[i] == 3)
        {
            total += C * 3;
        }
    }
    cout << total;
    return 0;
}
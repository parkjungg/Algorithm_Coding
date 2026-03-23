#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    
    int maxV = *max_element(wallet.begin(), wallet.end());
    int minV = *min_element(wallet.begin(), wallet.end());
    
    while(true)
    {
        int billMax = *max_element(bill.begin(), bill.end());
        int billMin = *min_element(bill.begin(), bill.end());
        if(billMin <= minV && billMax <= maxV)
            break;
        if(bill[0] > bill[1])
            bill[0] = bill[0] / 2;
        else
            bill[1] = bill[1] / 2;
        answer++;
    }
    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int mx = -1000000;
    int a[5] = {1, 2, 3, 4, 5};
    int b[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int c[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int cnt1 = 0;
    int cnt2 = 0;
    int cnt3 = 0;
    
    for(int i = 0; i < answers.size(); i++) {
        if(answers[i] == a[i % 5]) cnt1++;
        if(answers[i] == b[i % 8]) cnt2++;
        if(answers[i] == c[i % 10]) cnt3++;
    }
    mx = max(max(cnt3, cnt2), cnt1);
    
    if(cnt1 == mx) answer.push_back(1);
    if(cnt2 == mx) answer.push_back(2);
    if(cnt3 == mx) answer.push_back(3);

    return answer;
}
// 1번 : 1 2 3 4 5
// 2번 : 2 1 2 3 2 4 2 5 
// 3번 : 3 3 1 1 2 2 4 4 5 5
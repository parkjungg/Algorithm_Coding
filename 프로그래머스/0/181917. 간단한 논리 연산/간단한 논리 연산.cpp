#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool temp1;
    bool temp2;
    if(x1 || x2) temp1 = true;
    else temp1 = false;
    
    if(x3 || x4) temp2 = true;
    else temp2 = false;
    
    return temp1 && temp2;
}
#include <string>
#include <vector>

using namespace std;

bool Check(vector<int> a, vector<int> b, vector<int> c, vector<int> d)
{
    int x1 = b[0] - a[0];
    int y1 = b[1] - a[1];
    int x2 = d[0] - c[0];
    int y2 = d[1] - c[1];
    
    return y1 * x2 == y2 * x1;
}

int solution(vector<vector<int>> dots) {
    if(Check(dots[0], dots[1], dots[2], dots[3])) return 1;
    if(Check(dots[0], dots[2], dots[1], dots[3])) return 1;
    if(Check(dots[0], dots[3], dots[1], dots[2])) return 1;
    
    return 0;
}
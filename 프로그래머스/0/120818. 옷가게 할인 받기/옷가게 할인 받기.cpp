#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    if(price >= 100000 && price < 300000) price = price * 95 / 100;
    else if(price >= 300000 && price < 500000) price = price * 90 / 100;
    else if(price < 100000) return price;
    else price = price * 80 / 100;
    return price;
}
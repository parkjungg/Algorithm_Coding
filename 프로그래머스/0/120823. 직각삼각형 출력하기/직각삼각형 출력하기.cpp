#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j > 0; j--)
        {
            cout << '*';
        }
        for(int k = n - i + 1; k > 0; k--)
        {
            cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
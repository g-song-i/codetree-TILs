#include <iostream>
using namespace std;

int main() {
    int n, i;
    i = 0;
    cin >> n;

    while (i + 3 <= n) {
        cout << i + 3 << " ";
        i += 3;
    }
    return 0;
}
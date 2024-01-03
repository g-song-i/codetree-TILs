#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b) {
        if (b >= c) {
            cout << b;
        } else if (c >= a) {
            cout << a;
        } else {
            cout << c;
        }
    } else if (b >= c) {
        if (c >= a) {
            cout << c;
        } else if (a >= b) {
            cout << b;
        } else {
            cout << a;
        }
    } else {
        if (a >= b) {
            cout << a;
        } else {
            cout << b;
        }
    }

    return 0;
}
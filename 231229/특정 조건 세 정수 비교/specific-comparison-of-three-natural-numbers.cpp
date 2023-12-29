#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int min;

    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else if (c <= a && c <= b) {
        min = c;
    }

    if (a == min) {
        cout << "1";
    } else {
        cout << "0";
    }
 
    if (a == b && b == c) {
        cout << " 1";
    } else {
        cout << " 0";
    }

    return 0;
}
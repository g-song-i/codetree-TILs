#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > 0) {
        for (int i = b; i >= 1; i--) {
            cout << a;
        }
    } else {
        cout << "0";
    }
    return 0;
}
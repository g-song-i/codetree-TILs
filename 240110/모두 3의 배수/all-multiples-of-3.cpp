#include <iostream>
using namespace std;

int main() {
    bool is_true = true;

    for (int i = 0; i < 5; i++) {
        int temp = 0;
        cin >> temp;

        if (temp % 3 != 0) {
            is_true = false;
        }
    }

    if (is_true) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}
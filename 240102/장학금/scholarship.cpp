#include <iostream>
using namespace std;

int main() {
    int mid, finals;
    cin >> mid >> finals;

    if (mid >= 90) {
        if (finals >= 95) {
            cout << "100000";
        } else if (finals >= 90) {
            cout << "50000";
        } else {
            cout << "0";
        }
    } else {
        cout << "0";
    }


    return 0;
}
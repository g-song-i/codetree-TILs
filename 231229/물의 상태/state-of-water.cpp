#include <iostream>
using namespace std;

int main() {
    int temperture;
    cin >> temperture;

    if (temperture < 0) {
        cout << "ice";
    } else if (temperture >= 100) {
        cout << "vapor";
    } else {
        cout << "water";
    }
    return 0;
}
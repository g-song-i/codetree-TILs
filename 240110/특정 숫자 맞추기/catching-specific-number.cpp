#include <iostream>
using namespace std;

int main() {
    while (1) {
        int temp;
        cin >> temp;

        if (temp < 25) {
            cout << "Higher" << endl;
            continue;
        } else if (temp > 25) {
            cout << "Lower" << endl;
            continue;
        } else {
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    while (1) {
        int temp;
        cin >> temp;

        if (temp == 1) {
            cout << "John" << endl;
            continue;
        } else if (temp == 2) {
            cout << "Tom" << endl;
            continue;
        } else if (temp == 3) {
            cout << "Paul" << endl;
            continue;
        } else if (temp == 4) {
            cout << "Sam" << endl;
        } else {
            cout << "Vacancy";
            break;
        }
    }
    return 0;
}
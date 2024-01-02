#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    if (score >= 95) {
        cout << "100000";
    } else if (score >= 90) {
        cout << "50000";
    } else {
        cout << "0";
    }
    return 0;
}
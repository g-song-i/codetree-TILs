#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int is_prime = true;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = false;
        }
    }

    if (is_prime) {
        cout << "P";
    } else {
        cout << "C";
    }
    return 0;
}
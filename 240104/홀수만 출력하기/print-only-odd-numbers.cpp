#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        if (temp % 3 == 0 && temp % 2 == 1) {
            cout << temp << endl;
        }
    }
    return 0;
}
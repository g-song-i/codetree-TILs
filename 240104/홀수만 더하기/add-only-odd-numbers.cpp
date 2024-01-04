#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum_val;
    sum_val = 0;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        if (temp % 2 == 1 && temp % 3 == 0) {
            sum_val += temp;
        }
    }

    cout << sum_val;
    return 0;
}
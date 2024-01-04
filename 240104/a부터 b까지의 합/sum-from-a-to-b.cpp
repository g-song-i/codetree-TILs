#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum_val;
    sum_val = 0;

    for (int i = a; i <= b; i++) {
        sum_val += i;
    }
    cout << sum_val;
    return 0;
}
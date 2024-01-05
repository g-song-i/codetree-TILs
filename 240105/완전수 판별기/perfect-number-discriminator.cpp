#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum_val;
    sum_val = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum_val += i;
        }
    }
    
    if (sum_val == n) {
        cout << "P";
    } else {
        cout << "N";
    }
    return 0;
}
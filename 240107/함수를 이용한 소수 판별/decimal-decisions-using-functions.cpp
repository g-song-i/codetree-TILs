#include <iostream>
using namespace std;

bool IsPrime(int n) {
    if(n == 1)
        return false;

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;

    // handling exception
    if (!(cin >> a >> b)) {
        cerr << endl;
        return 0;
    }

    int sum_val;
    sum_val = 0;

    for (int i = a; i <= b; i++) {
        if (IsPrime(i)) {
            sum_val += i;
        }
    }

    cout << sum_val;

    return 0;
}
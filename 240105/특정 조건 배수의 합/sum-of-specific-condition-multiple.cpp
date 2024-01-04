#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum_val;
    sum_val = 0;

    if (a < b) {
        for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            sum_val += i;
        }
    }
    } else if (a > b) {
        for (int i = b; i <= a; i++) {
        if (i % 5 == 0) {
            sum_val += i;
        }
    }
    }
    
    
    cout << sum_val;

    return 0;
}
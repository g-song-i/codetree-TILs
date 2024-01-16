#include <iostream>
using namespace std;

int main() {
    int a, b;
    int remainder[10];
    int remainder_cnt[10] = {0, };
    int i = 0;

    cin >> a >> b;

    while (a > 1) {
        remainder[i] = a % b;
        a = a / b;
        i++;
    }

    int square_sum = 0;

    for (int j = 0; j < i; j++) {
        remainder_cnt[remainder[j]]++;
    }

    for (int j = 0; j < 10; j++) {
        square_sum += remainder_cnt[j] * remainder_cnt[j];
    }

    cout << square_sum;

    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int sum_val, cnt;
    double avg_val;
    sum_val = 0;
    cnt = 0;
    avg_val = 0;

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum_val += i;
            cnt++;
        }
    }

    avg_val = sum_val / (double) cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << avg_val; 

    return 0;
}
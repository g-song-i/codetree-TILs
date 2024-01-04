#include <iostream>
using namespace std;

int main() {
    int sum_val, cnt;
    double avg_val;
    sum_val = 0;
    cnt = 0;
    avg_val = 0;

    for (int i = 0; i < 10; i++) {
        int temp;
        cin >> temp;

        if (temp >= 0 && temp <= 200) {
            sum_val += temp;
            cnt++;
        }
    }

    avg_val = sum_val / (double)cnt;
    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << avg_val;
    return 0;
}
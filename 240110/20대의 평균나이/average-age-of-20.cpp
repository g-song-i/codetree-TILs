#include <iostream>
using namespace std;

int main() {
    double avg_age;
    avg_age = 0;

    int cnt, sum;
    cnt = 0;
    sum = 0;

    while (1) {
        int temp;
        cin >> temp;

        if (temp % 20 >= 0 && temp % 20 <= 9 && temp / 20 == 1) {
            cnt++;
            sum += temp;
            continue;
        } else {
            avg_age = sum / (double) cnt;
            cout << fixed;
            cout.precision(2);
            cout << avg_age;
            break;
        }
    }
    return 0;
}
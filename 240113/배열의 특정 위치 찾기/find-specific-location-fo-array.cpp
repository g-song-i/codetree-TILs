#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;
    double avg = 1;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i < 10; i += 2) {
        sum += arr[i];
    }

    cout << sum << " ";

    sum = 0;
    int cnt = 0;

    for (int i = 2; i < 10; i += 3) {
        sum  += arr[i];
        cnt++;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum / (double) cnt;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, cnt;
    cin >> n;
    cnt = 0;

    double avg = 0;
    double sum = 0;
    double arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cnt++;
        sum += arr[i];
    }

    avg = sum / (double) cnt;

    cout << fixed;
    cout.precision(1);
    cout << avg << endl;

    if (avg >= 4.0) {
        cout << "Perfect";
    } else if (avg >= 3.0) {
        cout << "Good";
    } else {
        cout << "Poor";
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum, cnt;
    double avg;

    sum = 0;
    avg = 0;
    cnt = 0;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] >= 250) {
            avg = sum / (double) cnt;
            break;
        }

        sum += arr[i];
        cnt++;
        avg = sum / (double) cnt;
    }

    cout << sum << " " << avg;

    return 0;
}
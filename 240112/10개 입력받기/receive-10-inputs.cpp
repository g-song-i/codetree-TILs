#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int cnt = 0;
    int arr[10];
    double avg;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            break;
        }
        cnt++;
    }

    for (int i = cnt; i >= 0; --i) {
        sum += arr[i];
    }

    cout << fixed;
    cout.precision(1);
    
    avg = sum / (double) cnt;
    cout << sum << " " << avg;
    return 0;
}
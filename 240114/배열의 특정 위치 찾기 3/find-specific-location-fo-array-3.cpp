#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            break;
        }
        cnt++;
    }

    int sum = 0;

    for (int i = cnt -1; i >= cnt -3; i--) {
        sum += arr[i];
    }

    cout << sum;
    return 0;
}
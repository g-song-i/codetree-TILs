#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int cnt = 0;

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        cnt++;

        if (arr[i] == 999) {
            break;
        } else if (arr[i] == -999) {
            break;
        }
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < cnt - 1; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << max << " " << min;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int i = 0;

    for (; i < 100; i++) {
        cin >> arr[i];

        if (arr[i] == 0) {
            break;
        }
    }

    int arr_tens[10] = {0, };

    for (int j = 0; j < i; j++) {
        int temp = arr[j] / 10;
        arr_tens[temp]++;
    }

    for (int j = 0; j < 10; j++) {
        if (j == 0) {
            continue;
        }
        cout << j << " - " << arr_tens[j] << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr[10];

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            arr[i] = a;
        } else if (i == 1) {
            arr[i] = b;
        } else {
            arr[i] = arr[i-1] + arr[i-2];
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] % 10 << " ";
    }
    return 0;
}
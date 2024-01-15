#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    arr[0] = 1;
    arr[1] = n;

    cout << arr[0] << " " << arr[1] << " ";

    for (int i = 2; i < 100; i++) {
        arr[i] = arr[i-1] + arr[i-2];

        if (arr[i] > 100) {
            cout << arr[i] << " ";
            break;
        }
        cout << arr[i] << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int arr[10];

    arr[0] = a;
    arr[1] = b;

    cout << arr[0] << " " << arr[1] << " ";

    for (int i = 2; i < 10; i++) {
        arr[i] = arr[i-1] + 2 * arr[i-2];
        cout << arr[i] << " ";
    }
    return 0;
}
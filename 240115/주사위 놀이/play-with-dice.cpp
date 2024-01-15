#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int countArray[6] = {};

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        countArray[arr[i]-1]++;
    }

    for (int i = 0; i < 6; i++) {
        cout << i + 1 << " - " << countArray[i] << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    int countArr[10] = {0, };

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        countArr[arr[i]]++;
    }

    for (int i = 1; i < 10; i++) {
        cout << countArr[i] << endl;
    }

    
    return 0;
}
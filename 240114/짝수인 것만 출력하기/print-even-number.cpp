#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int even_arr[n];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            even_arr[cnt] = arr[i];
            cnt++;
        }
    }

    for (int i = 0; i < cnt; i++) {
        cout << even_arr[i] << " ";
    }
    return 0;
}
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

    int score_arr[10] = {0,};

    for (int i = 0; i < cnt; i++) {
        int temp = arr[i] / 10;
        score_arr[temp - 1]++;
    }

    for (int i = 9; i >= 0; i--) {
        cout << i + 1 << "0 - " << score_arr[i] << endl;
    }

    return 0;
}
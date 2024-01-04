#include <iostream>
using namespace std;

int main() {
    int cnt;
    cnt = 0;

    for (int i = 0; i <= 4; i++) {
        int temp;
        cin >> temp;

        if (temp % 2 == 0) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
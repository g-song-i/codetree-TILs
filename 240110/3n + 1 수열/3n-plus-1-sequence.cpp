#include <iostream>
using namespace std;

int main() {
    int n, cnt;
    cin >> n;
    cnt = 0;

    while (1) {
        if (n == 1) {
            cout << cnt;
            break;
        }

        if (n % 2 == 0) {
            n /= 2;
            cnt++;
            continue;
        } else {
            n = n*3 + 1;
            cnt++;
            continue;
        }
    }
    return 0;
}
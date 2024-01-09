#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt;
    cnt = 0;

    for (int i = 1; i <= 100; i++) {
        cnt += i;
        if (cnt >= n) {
            cout << i;
            break;
        }
    }
    return 0;
}
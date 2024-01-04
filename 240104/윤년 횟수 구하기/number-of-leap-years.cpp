#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt;
    cnt = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            if (i % 100 == 0) {
                if (i % 400 == 0) {
                    cnt++;
                }
            } else {
                cnt ++;
            }
        }
    }

    cout << cnt;
    return 0;
}
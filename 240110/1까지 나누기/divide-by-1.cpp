#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt, i;
    cnt = 0;
    i = 1;

    while (n > 0) {
        n /= i;
        cnt++;
        i++;

        if (n == 0) {
            cout << cnt;
            break;
        }
    }
    return 0;
}
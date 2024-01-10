#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt;
    cnt = 0;

    while (n != 1) {
        n = n /2;
        cnt ++;
    }

    cout << cnt;
    return 0;
}
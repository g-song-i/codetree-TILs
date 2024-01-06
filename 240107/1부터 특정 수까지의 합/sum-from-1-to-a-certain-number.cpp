#include <iostream>
using namespace std;

int CalculateQuo(int n) {
    int cnt;
    cnt = 0;

    for (int i = 1; i <= n; i++) {
        cnt += i;
    }

    return cnt / 10;
}

int main() {
    int n;
    cin >> n;

    int result;
    result = CalculateQuo(n);

    cout << result;
    return 0;
}
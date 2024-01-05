#include <iostream>
using namespace std;

void PrintSquare(int n) {

    int cnt;
    cnt = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (cnt > 9) {
                cnt = 1;
            }
            cout << cnt << " ";
            cnt++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    PrintSquare(n);

    return 0;
}
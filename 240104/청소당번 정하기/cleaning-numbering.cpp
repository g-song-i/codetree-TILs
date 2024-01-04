#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt1, cnt2, cnt3;
    cnt1 = 0;
    cnt2 = 0;
    cnt3 = 0;

    for (int i = 0; i <= n; i++) {

        if (i == 0) {
            continue;
        }

        if (i % 2 == 0) {
            if (i % 12 == 0) {
                cnt3++;
            } else if (i % 3 == 0) {
                cnt2++;
            } else {
                cnt1++;
            }
        } else if (i % 3 == 0) {
            if (i % 12 == 0) {
                cnt3++;
            } else {
                cnt2++;
            }
        }
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3 << " ";
    return 0;
}
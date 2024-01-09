#include <iostream>
using namespace std;

int main() {
    int cnt = 0;

    while (1) {
        int temp;
        cin >> temp;

        if (temp % 2 == 0) {
            cout << temp / 2 << endl;
            cnt++;
            if (cnt == 3) {
                break;
            }
            continue;
        } else {
            continue;
        }
    }


    return 0;
}
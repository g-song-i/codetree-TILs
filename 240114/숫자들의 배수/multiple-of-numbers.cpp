#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    int index = 1;

    while (1) {
        cout << n * index << " ";

        if ((n * index) % 5 == 0) {
            cnt++;
            if (cnt == 2) {
                break;
            }
        }

        index++;
    }

    return 0;
}
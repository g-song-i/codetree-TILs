#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;

    for (int i = a + n; i <= a + n*n; i += n) {
        cout << i << endl;
    }
    return 0;
}
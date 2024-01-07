#include <iostream>
using namespace std;

bool Contain369(int number) {
    string num_str = to_string(number);

    for(char digit: num_str) {
        if (digit == '3' || digit == '6' || digit == '9') {
            return true;
        }
    }

    return false;
}

int Count369(int a, int b) {
    int cnt;
    cnt = 0;

    for (int i = a; i <= b; i++) {
        if ((i % 3 == 0) || Contain369(i)) {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << Count369(a, b);
    return 0;
}
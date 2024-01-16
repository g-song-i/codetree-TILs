#include <iostream>
using namespace std;

int main() {
    char arr[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char input;
    cin >> input;

    int index = -1;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == input) {
            index = i;
        }
    }

    if (index == -1) {
        cout << "None";
    } else {
        cout << index;
    }

    return 0;
}
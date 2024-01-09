#include <iostream>
using namespace std;

int main() {
    int row, col;
    row = 0;
    col = 0;

    while (1) {
        char temp;
        cin >> row >> col >> temp;

        cout << row * col << endl;

        if (temp == 'C') {
            break;    
        }
    }
    return 0;
}
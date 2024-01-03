#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Jan, Mar, May, Jul, Aug, Oct, Dec: 31
    // Apr, Jun, Sept, Nov: 30
    // Feb: 28

    if (n == 2) {
        cout << "28";
    } else {
        if (n == 4 || n == 6 || n == 9 || n == 11) {
            cout << "30";
        } else {
            cout << "31";
        }
    }
    return 0;
}
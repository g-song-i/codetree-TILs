#include <iostream>
using namespace std;

int main() {
    int a_temp, b_temp, c_temp, emer_count;
    char a_symt, b_symt, c_symt;
    emer_count = 0;
    cin >> a_symt >> a_temp >> b_symt >> b_temp >> c_symt >> c_temp;

    if (a_temp >= 37 && a_symt == 'Y') {
        emer_count++;
    } 
    if (b_temp >= 37 && b_symt == 'Y') {
        emer_count++;
    }
    if (c_temp >= 37 && c_symt == 'Y') {
        emer_count++;
    }

    if (emer_count >= 2) {
        cout << 'E';
    } else {
        cout << 'N';
    }
    return 0;
}
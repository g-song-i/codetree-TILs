#include <iostream>
using namespace std;

bool IsYoon(int n) {
    if (n % 4 == 0) {
        if (n % 100 == 0) {
            if (n % 400 == 0)
                return true;
            return false;
        } 
        return true;
    }

    return false;
}

int main() {
    int y;
    cin >> y;

    if (IsYoon(y)) {
        cout << "true";
    } else {
        cout << "false";
    }
    
    return 0;
}
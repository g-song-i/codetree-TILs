#include <iostream>
using namespace std;

void PrintTenStars() {
    cout << "**********";
    cout << endl;
}

int main() {
    for (int i = 0; i < 5; i++) {
        PrintTenStars();
    }
    return 0;
}
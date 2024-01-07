#include <iostream>
using namespace std;

void Multiply(int a, int b) {
    int result = 1;
    for(int i = 0; i < b; i++) 
        result *= a;
    cout << result;
}

int main() {
    int a, b;
    cin >> a >> b;

    Multiply(a, b);
    return 0;
}
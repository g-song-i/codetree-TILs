#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double sum, sub, result;
    sum = a + b;
    sub = a - b;
    result = sum / sub;

    cout << fixed;
    cout.precision(2);
    cout << result; 
    return 0;
}
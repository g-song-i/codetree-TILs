#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int smallest;
    smallest = min(min(a, b), c);

    cout << smallest;
    return 0;
}
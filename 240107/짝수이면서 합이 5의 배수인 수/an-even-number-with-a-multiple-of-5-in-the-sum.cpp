#include <iostream>
using namespace std;

void FindEven(int n) {
    int sum;
    sum = 0;

    sum = n / 10;
    sum = (sum + n % 10);

    if ((n % 2 == 0) && (sum % 5 == 0)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    int n;
    cin >> n;

    FindEven(n);
    
    return 0;
}
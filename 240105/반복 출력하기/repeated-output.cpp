#include <iostream>
using namespace std;

void PrintStars(int n) {
    for (int i = 0; i < n; i++) {
        cout << "12345^&*()_";
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    PrintStars(N);
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int FindGcd(int n, int m) {
    if (m == 0) {
        return n;
    }

    return FindGcd(m, n % m);
}

void FindLcm(int n, int m) {
    cout << n * m / FindGcd(n, m);
}

int main() {
    int n, m;
    cin >> n >> m;

    int N, M;
    
    N = min(n, m);
    M = max(n, m);

    FindLcm(N, M);

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum_val;
    double avg_val;
    sum_val = 0;
    avg_val = 0;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        sum_val += temp;
    }

    avg_val = sum_val / (double) n;
    cout << sum_val << " " << avg_val;
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 1; i <= 10; i++){
        int temp;
        cin >> temp;

        if (temp % 3 == 0) {
            cnt1++;
        } 
        
        if (temp % 5 == 0) {
            cnt2++;
        }
    }

    cout << cnt1 << " ";
    cout << cnt2 << " ";
    return 0;
}
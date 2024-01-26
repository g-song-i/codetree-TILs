#include <iostream>
using namespace std;

#define MAX_N 1000

int main() {
    int n;
    cin >> n;

    int nums[MAX_N];

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int max = -1;
    for (int i = 0; i < n; i++) {
        int curr_num = nums[i];
        if (max < curr_num) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == curr_num) {
                    cnt++;
                }
            }
            if (cnt == 1) {
                max = curr_num;
            }
        }
    }

    cout << max;
    
    return 0;
}
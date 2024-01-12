#include <iostream>
using namespace std;

int main() {
    int studentNum;
    int score[4];
    int cnt = 0;

    cin >> studentNum;

    for (int i = 0; i < studentNum; i++) {
        int sum = 0;
        double avg = 0;

        for (int j = 0; j < 4; j++) {
            cin >> score[i];
            sum += score[i];
        }

        avg = sum / (double) 4;

        if (avg >= 60) {
            cout << "pass" << endl;
            cnt++;
        } else {
            cout << "fail" << endl;
        }
    }

    cout << cnt;

    return 0;
}
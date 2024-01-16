#include <iostream>
using namespace std;

int main() {
    char symptom[3];
    int temp[3];
    int medOffice[4] = {0, };

    for (int i = 0; i < 3; i++) {
        cin >> symptom[i] >> temp[i];

        if (symptom[i] == 'Y' && temp[i] >= 37) {
            medOffice[0]++;
        } else if (symptom[i] == 'N' && temp[i] >= 37) {
            medOffice[1]++;
        } else if (symptom[i] == 'Y' && temp[i] < 37) {
            medOffice[2]++;
        } else {
            medOffice[3]++;
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << medOffice[i] << " ";
    }

    if (medOffice[0] >= 2) {
        cout << "E";
    }
    return 0;
}
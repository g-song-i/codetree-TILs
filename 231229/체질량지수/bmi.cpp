#include <iostream>
using namespace std;

int main() {
    int height, weight;
    double squarem, bmi;
    cin >> height >> weight;

    squarem = (double)height * 0.01;
    squarem *= squarem;
    bmi = weight / squarem;

    if (bmi >= 25) {
        cout << (int)bmi << endl << "Obesity";
    } else {
        cout << (int)bmi;
    }
    return 0;
}
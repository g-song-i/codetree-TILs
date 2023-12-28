#include <iostream>
#include <string>
using namespace std;

int main() {
    int score;
    string is_passed;
    cin >> score;

    is_passed = score == 100 ? "pass" : "failure";
    cout << is_passed;  
    return 0;
}
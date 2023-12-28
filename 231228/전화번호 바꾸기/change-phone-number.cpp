#include <iostream>
#include <string>
using namespace std;

int main() {
    int fn, sn, tn;
    char n;
    cin >> fn ;
    cin.get(n);
    cin >> sn;
    cin.get(n);
    cin >> tn;

    cout << "010" << "-" << tn << "-" << sn;
    return 0;
}
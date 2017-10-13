#include <iostream>
using namespace std;

unsigned int fakultaet(unsigned int);

int main() {
    int fak(0);

    cout << "Fakultät eingeben:" << endl;
    cin >> fak;




    cout << "Ergebnis: " << fakultaet(fak) << endl;

    return 0;
}

unsigned int fakultaet(unsigned int fak) {
    if (fak <= 1) {
        return 1;
    } else {
        return fakultaet(fak -1) * fak;
    }
}
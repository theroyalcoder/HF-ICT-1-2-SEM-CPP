#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int fach[6] {0,0,0,0,0,0};
    int weg1(0), weg2(0), weg3(0), weg4(0), weg5(0);
    int summe(0);
    srand(time(NULL));

    for (int j = 0; j < 100; j++) {
        for (int i = 0; i < 1; i++) {
            weg1 = rand() % 2;
            weg2 = rand() % 2;
            weg3 = rand() % 2;
            weg4 = rand() % 2;
            weg5 = rand() % 2;

            summe = weg1 + weg2 + weg3 + weg4 + weg5;
        }

        switch (summe) {
            case 0:
                fach[0]++;
                break;
            case 1:
                fach[1]++;
                break;
            case 2:
                fach[2]++;
                break;
            case 3:
                fach[3]++;
                break;
            case 4:
                fach[4]++;
                break;
            case 5:
                fach[5]++;
                break;
        }
    }

    for (int k = 0; k <= 5; k++) {
        cout << "Fach " << k << ": " << fach[k] << endl;
    }

    return 0;
}
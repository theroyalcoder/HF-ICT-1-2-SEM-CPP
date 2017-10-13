#include <iostream>
using namespace std;

int raten(int);

int main() {
    int zahl(0);

    srand(time(NULL));
    zahl =rand() % 100 + 1;

    cout << "Random-Zahl:" << zahl << endl;
    raten(zahl);
    return 0;
}

int raten(int zahl) {
    int temp(0);
    static int count(0);

    count += 1;

    if (count <= 6) {
        cout << "Geben Sie die " << count << ". Zahl ein: ";
        cin >> temp;


        if (temp < zahl) {
            cout << "Die gesuchte Zahl ist grösser" << endl;
            raten(zahl);
        } else if (temp > zahl) {
            cout << "Die gesuchte Zahl ist kleiner" << endl;
            raten(zahl);
        } else if (temp == zahl) {
            cout << "Gratulation! Sie haben die Zahl " << zahl << " im " << count << ". Versuch erraten." << endl;
            if (count <= 2) {
                cout << "I AM PROUD OF YOU MY SON";
            }
        }
    } else {
        cout << "YOU SUCK" << endl;
    }

    return zahl;
}

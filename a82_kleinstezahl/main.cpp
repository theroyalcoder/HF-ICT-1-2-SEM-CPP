#include <iostream>
#include <iomanip>

using namespace std;

int a82_kleinstezahl_funktion(){};

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Geben Sie 3 Zahlen ein:" << endl;

    cout << "1. Zahl: ";
    cin >> a;

    cout << "2. Zahl: ";
    cin >> b;

    cout << "3. Zahl: ";
    cin >> c;

    cout << "Die kleinste Zahl ist: ";

    if (a < b){
        if (a < c){
            cout << a;
        }
    } else if (b < c){
        cout << b;
    } else {
        cout << c;
    }

    return 0;

    a82_kleinstezahl_funktion();
}
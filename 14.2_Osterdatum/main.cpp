#include <iostream>
using namespace std;

int main() {
    int a(0), b(0), k(0), n(0), q(0), w(0), y(0), m(0), tmp(31);

    cout << "Berechnen des Osterdatums zwischen 1900 und 2099: " << endl << "Geben Sie das Jahr ein: ";
    cin >> y;

    //1.
    n = y - 1900;

    //2
    a = n % 19;

    b = ((7*a) + 1 ) / 19;

    m = ((11*a) + 4 - b) % 29;

    q = n / 4;

    w = ( n + q + 31 - m ) % 7;

    //3
    k = 25 - m - w;

    //4

    if (k <= 0)
    {
        cout << tmp + k << "März" << endl;
    } else {
        cout << k << "April" << endl;
    }


    return 0;
}
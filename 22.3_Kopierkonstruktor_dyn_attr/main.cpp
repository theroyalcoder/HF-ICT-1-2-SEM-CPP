#include <iostream>
#include "kopierkonstuktorClass.h"
using namespace std;

int main() {
    double a(0), b(0), c(0);

    cout << "a eingeben: ";
    cin >> a;

    cout << "b eingeben: ";
    cin >> b;

    kopierkonstuktorClass obj1(a, b);

    kopierkonstuktorClass obj2(obj1);

    cout << "c eingeben: ";
    cin >> c;

    obj1.setB(c);

    cout << "b = " << obj1.getB() << endl;
    cout << "new b = " << obj2.getB() << endl;
    return 0;
}

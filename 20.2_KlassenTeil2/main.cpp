#include <iostream>
#include "myTest.h"

int main() {
    int a(0);
    myTest m;

    cout << "zahl eingeben:";
    cin >> a;

    m.setValue(a);


    cout << m.showValue();
    return 0;
}

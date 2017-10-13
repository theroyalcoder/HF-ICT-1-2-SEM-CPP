#include <iostream>
#include "MyRectangle.h"

using namespace std;

int main() {
    double a(0), b(0);
    MyRectangle m;

   cin >> a >> b;

    m.setValues(a, b);
    m.calculateArea();

    cout << m.getArea();

    return 0;
}

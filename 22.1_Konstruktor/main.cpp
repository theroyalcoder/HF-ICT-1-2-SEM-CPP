#include <iostream>
#include "MyRectangle.h"

using namespace std;

int main() {
    double a(0), b(0);

    cin >> a >> b;

    MyRectangle obj(a, b);

    obj.calculateArea();

    cout << obj.getArea();

    return 0;
}
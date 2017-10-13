//
// Created by Anuu Thomson on 25.01.17.
//

#include <iostream>
#include "MyRectangle.h"
using namespace std;

MyRectangle::MyRectangle () {
    //Default Constructor
}

MyRectangle::MyRectangle (double x, double y) {
    _a = x;
    _b = y;
}

void MyRectangle::calculateArea() {
    _area = _a * _b;
}

double MyRectangle::getArea() {
    return _area;
}

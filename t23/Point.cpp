// Created by Anuu Thomson on 14.05.17.


#include "Point.h"

Point::Point() {

}

Point::Point(double x, double y) {
    _x = x;
    _y = y;
}

Point::Point(const Point &P) {
    this->_x = P._x;
    _y = P._y;

}

void Point::setPoint(double _x, double y) {
    this->_x = _x;
    _y = y;
}
void Point::showPoint() {
    cout << _x << endl << _y;
}

double Point::getX() {
    return _x;
}

double Point::getY() {
    return _y;
}

void Point::shiftAxis(double value) {
    _x += value;
    _y += value;
}

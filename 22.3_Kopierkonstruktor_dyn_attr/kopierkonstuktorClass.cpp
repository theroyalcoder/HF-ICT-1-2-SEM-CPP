//
// Created by Anuu Thomson on 04.02.17.
//

#include "kopierkonstuktorClass.h"

kopierkonstuktorClass::kopierkonstuktorClass() {

}

kopierkonstuktorClass::kopierkonstuktorClass(double x, double y) {

    _a = x;
    _b = new double(); // _b = new double(y)
    *_b = y;
    _area = 0;
}
//Man nimmt das Object per Reference, da er nur Zugriff auf die Variable will, Call by Value würde ein neues Object erstellen
kopierkonstuktorClass::kopierkonstuktorClass(const kopierkonstuktorClass &cpy1) {
    _a = cpy1._a;
    _b = new double();
    *_b = *cpy1._b;
    _area = cpy1._area;
}

void kopierkonstuktorClass::setB(double y) {
    *_b = y;
}

void kopierkonstuktorClass::calculateArea() {
    cout << *_b << endl;
}

double kopierkonstuktorClass::getB() {
    return *_b;
}

kopierkonstuktorClass::~kopierkonstuktorClass() {
    delete _b;
}
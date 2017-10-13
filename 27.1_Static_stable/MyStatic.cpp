//
// Created by Anuu Thomson on 31.03.17.
//

#include "MyStatic.h"

MyStatic::MyStatic() {
    _a = 0;
    _a++;
    cout << _a << ". Objekt erzeugt." << endl;
}

int MyStatic::getA() {
    return _a;
}

void MyStatic::showA() {
    cout << _a;
}

//
// Created by Anuu Thomson on 31.03.17.
//

#include "stack.h"
#include <iostream>
using namespace std;

stack::stack(int s) {
    _top = s;
    _count = -1;
    _pa = new int[s];

    for (int i = 0; i < 5; i++) {
        _pa[i] = 0;
    }
}

stack::~stack() {
    delete []_pa;
}

bool stack::push(const int &element) {
    //If condition is true, then save the value or else return false
    if (_count + 1 == _top)
        return false;

    _count++;
    _pa[_count] = element;

    return true;
}

bool stack::pop(int &element) {
    if (_count < 0)
        return false;


    _pa[_count] = NULL;
    _count--;

    return true;
}

bool stack::top(int &element) const {
    if (_count < 0)
        return false;
    element = _pa[_count];

    return true;
}

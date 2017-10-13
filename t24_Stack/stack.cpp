//
// Created by Anuu Thomson on 13.05.17.
//

#include "stack.h"

stack::stack(int s) {
    _pa = new int;
    _count = s;
}

stack::~stack() {
    delete _pa;
}

bool stack::push(const int &element) {
    if(_top < _count)
    {
        cout << "Eingabe:";
        _pa[_top] = element;
    } else {
        cout << "Stack voll" << endl;
    }
    return false;
}

bool stack::pop(int &element) {
    if (_top < _count)
    {
        element = _pa[_top];
        _pa[_top] = 0;
    }
    return false;
}

bool stack::top(int &element) {
    if (_top < _count)
    {
        element = _pa[_top];
    }
    return false;
}

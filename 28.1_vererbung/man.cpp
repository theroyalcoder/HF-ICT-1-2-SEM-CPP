//
// Created by Anuu Thomson on 28.04.17.
//

#include "man.h"

void man::drawShape() {
    int tmp(0);
    tmp = _size;
    tmp = tmp / 10;

    for (int i = 0; i < tmp; i++)
    {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = i; k < (tmp * 2)-i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

//
// Created by Anuu Thomson on 28.04.17.
//

#include "woman.h"

void woman::drawShape() {
    int tmp(0);
    tmp = _size;
    tmp = tmp / 10;

    for (int i = tmp; i > 0; i--)
    {
        for (int j = i; j > 0; j--) {
            cout << " ";
        }

        for (int k = (tmp * 2) - i - 1; k > i; k--) {
            cout << "*";
        }
        cout << endl;
    }
}

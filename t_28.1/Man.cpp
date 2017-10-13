//
// Created by Anuu Thomson on 19.05.17.
//

#include "Man.h"

void Man::drawShape() {
    int rsize = _size;
    rsize /= 10;
    rsize *= 2;
    rsize -= 1;


    for (int i = rsize; i > 0; i--) {
        for (int j = i ; j > 0; j--) {
            cout << "*";
        }
        cout << "\t" << endl;
        i--;
    }
}

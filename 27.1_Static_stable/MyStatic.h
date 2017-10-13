//
// Created by Anuu Thomson on 31.03.17.
//

#ifndef INC_27_1_STATIC_MYSTATIC_H
#define INC_27_1_STATIC_MYSTATIC_H
#include <iostream>
using namespace std;

class MyStatic {
private:
    int _x;
    static int _a; //Klassenvarible

public:
    MyStatic();
    static void showA();
    static int getA();
};


#endif //INC_27_1_STATIC_MYSTATIC_H

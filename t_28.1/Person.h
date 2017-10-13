//
// Created by Anuu Thomson on 19.05.17.
//

#ifndef T_28_1_PERSON_H
#define T_28_1_PERSON_H

#include <iostream>
using namespace std;

class Person {
public :
    void showElements();
    void setAge(int );
    void setSize(int );
    void drawShape();

protected :
    int _size;

private :
    int _age;
};


#endif //T_28_1_PERSON_H

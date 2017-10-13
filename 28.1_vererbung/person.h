//
// Created by Anuu Thomson on 28.04.17.
//

#ifndef INC_28_1_VERERBUNG_PERSON_H
#define INC_28_1_VERERBUNG_PERSON_H
#include <iostream>
using namespace std;

class person{
public:
    void showElements();
    void setAge(int );
    void setSize(int );
    virtual void drawShape();

protected:
    int _size;
private:
    int age;
};

#endif //INC_28_1_VERERBUNG_PERSON_H

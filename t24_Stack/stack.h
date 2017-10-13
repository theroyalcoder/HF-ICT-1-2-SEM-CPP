//
// Created by Anuu Thomson on 13.05.17.
//

#ifndef T24_STACK_STACK_H
#define T24_STACK_STACK_H

#include <iostream>
using namespace std;

class stack {
public:
    stack(int s = 5);
    ~stack();
    bool push(const int &element);
    bool pop(int &element);
    bool top(int &element);
private:
    int *_pa;
    int _top;
    int _count;

};


#endif //T24_STACK_STACK_H

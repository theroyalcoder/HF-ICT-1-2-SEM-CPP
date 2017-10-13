//
// Created by Anuu Thomson on 31.03.17.
//

#ifndef INC_24_1_STACK_TEIL1_STACK_H
#define INC_24_1_STACK_TEIL1_STACK_H


class stack {
public:
    stack(int s = 5);
    ~stack();
    bool push(const int &element);
    bool pop(int &element);
    bool top(int &element) const;
private:
    int *_pa;
    int _top; //Max. of stack
    int _count;
};


#endif //INC_24_1_STACK_TEIL1_STACK_H

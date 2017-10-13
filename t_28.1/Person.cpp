//
// Created by Anuu Thomson on 19.05.17.
//

#include "Person.h"

//Person::Person() {
//
//}

//Person::Person(const Person &cobj1) {
//    m = new int;
//    *m = *(cobj1.m);
//}

void Person::showElements() {
    cout << "age" << _age << endl << "size" <<_size << endl;
}

void Person::setAge(int age) {
    _age = age;
}

void Person::setSize(int size) {
    _size = size;
}

void Person::drawShape() {
    cout << "draw";
}

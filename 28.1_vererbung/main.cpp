#include <iostream>
#include "person.h"
#include "man.h"
#include "woman.h"

int main()
{
    int size(0), age(0), tmp(0);

    man  m1;
    woman w1;

    cout << "Einen Mann erzeugen: " << endl;
    cout << "Grösse: ";
    cin >> size;
    m1.setSize(size);

    cout << endl << "Alter: ";
    cin >> age;
    m1.setAge(age);

    cout << "Einee Frau erzeugen: " << endl;
    cout << "Grösse: ";
    cin >> size;
    w1.setSize(size);

    cout << endl << "Alter: ";
    cin >> age;
    w1.setAge(age);

    m1.drawShape();
    m1.showElements();
    w1.drawShape();
    w1.showElements();

    return 0;
}

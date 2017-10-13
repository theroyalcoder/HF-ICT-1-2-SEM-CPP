//
// Created by Anuu Thomson on 04.02.17.
//

#ifndef INC_22_2_KOPIERKONSTRUKTOR_KOPIERKONSTUKTORCLASS_H
#define INC_22_2_KOPIERKONSTRUKTOR_KOPIERKONSTUKTORCLASS_H
#include <iostream>
using namespace std;

class kopierkonstuktorClass {
private:
    double _a;
    double *_b;
    double _area;
public:
    kopierkonstuktorClass();
    ~kopierkonstuktorClass();
    kopierkonstuktorClass(double, double );
    kopierkonstuktorClass(const kopierkonstuktorClass &);
    void setB(double);
    double getB();
    void calculateArea();
};


#endif //INC_22_2_KOPIERKONSTRUKTOR_KOPIERKONSTUKTORCLASS_H

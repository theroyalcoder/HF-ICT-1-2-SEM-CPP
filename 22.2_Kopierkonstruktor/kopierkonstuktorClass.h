//
// Created by Anuu Thomson on 04.02.17.
//

#ifndef INC_22_2_KOPIERKONSTRUKTOR_KOPIERKONSTUKTORCLASS_H
#define INC_22_2_KOPIERKONSTRUKTOR_KOPIERKONSTUKTORCLASS_H


class kopierkonstuktorClass {
private:
    double _a;
    double *_b;
public:
    kopierkonstuktorClass();
    kopierkonstuktorClass(double, double );
    kopierkonstuktorClass(const kopierkonstuktorClass &);
    void setB(double);
    double getB();
};


#endif //INC_22_2_KOPIERKONSTRUKTOR_KOPIERKONSTUKTORCLASS_H

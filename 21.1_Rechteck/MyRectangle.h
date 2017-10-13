//
// Created by Anuu Thomson on 25.01.17.
//

#ifndef INC_21_1_RECHTECK_MYRECTANGLE_H
#define INC_21_1_RECHTECK_MYRECTANGLE_H


class MyRectangle {
public:
    void setValues(double , double );
    void calculateArea();
    double getArea();

private :
    double _a;
    double _b;
    double _area;
};


#endif //INC_21_1_RECHTECK_MYRECTANGLE_H

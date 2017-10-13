//
// Created by Anuu Thomson on 14.05.17.
//

#ifndef T23_POINT_H
#define T23_POINT_H

#include "iostream"
using namespace std;

class Point{
public :
    Point();
    Point(double x, double y);
    Point(const Point &P);
    void setPoint(double x, double y);
    void showPoint();
    double getX();
    double getY();
    void shiftAxis(double value);
private :
    double _x;
    double _y;


};


#endif //T23_POINT_H

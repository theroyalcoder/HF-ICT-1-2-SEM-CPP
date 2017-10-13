#include "Point.h"

int main() {
    double dx(0), dy(0), axValue(2);

    Point *p1 = new Point;

    delete p1;

    cout<<"x und y Werte eingeben: \n";

    cin>>dx;
    cin>>dy;

    p1.setPoint(dx,dy);

    cout<<"Die Achse um "<<axValue<<" verschieben"<<endl;

    p1.shiftAxis(axValue) ;

    cout<<"\nPosition von p1: x= "<<p1.getX()<<" y= "<<p1.getY()<<endl;

    Point p2(p1);

    cout<<"\nPosition von p2: "<<endl ;

    p2.showPoint();

    return 0;
}

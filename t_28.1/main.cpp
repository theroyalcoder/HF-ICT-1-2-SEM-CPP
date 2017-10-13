#include "Person.h"
#include "Man.h"
#include "Woman.h"


int main() {
    Man m1;

    m1.setAge(50);
    m1.setSize(50);
    m1.showElements();
    m1.drawShape();


//    Man *p_m1 = new Man;
//    p_m1 = &m1;
//    p_m1->drawShape();

    return 0;
}

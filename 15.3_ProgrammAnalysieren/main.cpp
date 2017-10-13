#include <iostream>
using namespace std;

int main(){
    float *f1, f2, f3(1) , *f4;
    f2 = 23;
    float &f5 = f2;
    f1 = &f5;
    *f1 = 5;
    f1 = NULL;

    cout<<"f1: "<<f1<<endl ;
    cout<<"f2: "<<f2<<endl ;

    f4 = f1 = &f2;
    *f1 = 23;
    f4 = &f3;
    f3 = 17;

    cout<<"f1: "<<f1<<endl;
    cout<<"f2: "<<f2<<endl;
    cout<<"f3: "<<f3<<endl;
    cout<<"++*f4: "<<++*f4<<endl ;
    return 0;
}
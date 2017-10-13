#include <iostream>
using namespace std;

int main() {
    int a(6) , b(2);
    int *pa, *pb;
    pa = &a;
    *pa +=1;
    cout<<"a = ? "<<a<<endl;

    pb = &b;
    *pb =*pb * *pa;
    b = b++ + ++a ;
    cout<<"b = ? "<<b<<endl;

    return 0;
}
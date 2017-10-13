#include <iostream>
using namespace std;

void f_swap(double *, double *);

int main() {
    double a(0), b(0);
    double *_a, *_b;

    _a = &a;
    _b = &b;

    cin >> a >> b;

    f_swap(_a, _b);

    cout << a << endl;
    cout<< b << endl;

    return 0;
}

void f_swap(double *a, double *b){
    double tmp(0);

    tmp = *a;
    *a = *b;
    *b = tmp;
}

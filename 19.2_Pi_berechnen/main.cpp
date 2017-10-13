#include <iostream>
#include <cmath>
#include <ctime>
#include <stdlib.h>
using namespace std;

double calculatePi(long);

int main() {
   srand(time(NULL));
    double sum(0);
    int n(1000);

    for (int i = 0; i < n; i++) {
        sum += calculatePi(10000);
    }

    cout << sum / n;
    return 0;
}

double calculatePi(long n){
    double x(0), y(0);
    long inCircle(0);

    for (long i = 0; i < n; i++) {
        x = 1 - (double) rand()/RAND_MAX *2;
        y = 1 - (double) rand()/RAND_MAX *2;

        if (sqrt((x*x + y*y) <= 1)) {
            ++inCircle;
        }
    }
    return 4 * (double) inCircle / n;
}
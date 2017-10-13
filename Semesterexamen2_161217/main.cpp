#include <iostream>
using namespace std;

/*
 * 2 Entwicklung Seite 3
 */
double average(double *a, double c){
    for (int i = 0; i <= c; i++) {
        cout << "Geben Sie die Zahl " << i << " ein: ";
        cin >> a[i + 1];
        *a += a[i + 1];
    }

    *a = *a/c;
}

double max(double *a, double c){
    double temp(0);
    for (int i = 0; i <= c; i++) {
        if (a[i + 1] > temp) {
            temp = a[i + 1];
        }
    }

    *a = temp;
}

//Durchschnitt der Resultate von den Funktionen average und max
double averageReturns(double , double ){

}

int main() {
    const int SIZE(6);
    double a[SIZE];


    average(a, SIZE);
    cout << "Durchschnitt: " << *a << endl;

    max(a, SIZE);
    cout << "Grösste: " << *a << endl;

    return 0;
}
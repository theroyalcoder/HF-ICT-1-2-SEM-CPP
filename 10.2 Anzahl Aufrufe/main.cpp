#include <iostream>
using namespace std;

int countfunctioncall();

int main()
{
    countfunctioncall();
    /*
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    countfunctioncall();
    */
    return 0;
}


int countfunctioncall()
{
    static int call = 0;
    call = call + 1;

    cout << "Diese Funktion wurde schon unglaubliche " << call << " Mal aufgerufen." << endl;
}


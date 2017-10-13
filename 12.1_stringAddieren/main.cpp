#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;


    cout << "Geben Sie den 1. Teilstring ein: ";
    getline(cin, str1);

    cout << "Geben Sie den 2. Teilstring ein: ";
    getline(cin, str2);


    cout << str1 + str2;

    return 0;
}
#include <iostream>
using namespace std;


int strCount(string *inStr, int *count){

    cout << *inStr;

    for (int i = 0; i < inStr->length(); i++) {
        *count += i;
        cout << *count;
    }
}

int main() {
    string *inStr;
    int *count;


    cout << "Geben Sie einen String ein: ";
    cin >> *inStr;

    cout << *inStr;

    strCount(inStr, count);

    cout << "Der String enthält " << *count << " Zeichen!";

    return 0;
}
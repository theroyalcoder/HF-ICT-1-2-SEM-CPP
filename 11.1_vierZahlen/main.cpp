#include <iostream>
using namespace std;

int main()
{
    double z[5]{0, 0, 0, 0, 0};

    for (int i = 0; i < 5; i++) {
        cin >> z[i];
    }

    for (int j = 4; j >= 0; j--) {
        cout << "z[" << j << "]" << z[j] << endl;
    }

    return 0;
}
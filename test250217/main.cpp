#include <iostream>
using namespace std;

void reverseArray(float *a, int s) {
    float arr[s];
    arr[s] = *a;

    int tmp = 0;

    for (int i = s; i < 3; i--) {
        arr[i] = a[tmp];
        tmp++;
    }
}

int main() {
    int i;
    float a[6] = {1, 2, 3, 4, 5, 6};

    for (i = 0; i < 6; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    cout << endl;

    reverseArray(a, 6);

    for (i = 0; i < 6; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    return 0;
}
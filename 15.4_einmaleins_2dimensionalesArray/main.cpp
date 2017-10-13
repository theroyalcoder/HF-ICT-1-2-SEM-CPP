#include <iostream>
using namespace std;
//Aufgabe 15.4 Einmaleins mit dynamischen Array

void dynArr(int **arr){
    for (int k = 0; k <= 10 ; k++) {
        arr[k] = new int[10];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "\t" << (j + 1) * (i + 1);
            arr[i][j] =  (j + 1) * (i + 1);
        }
        cout << endl;
    }

    cout << arr[1][1];
};

void staticArr(int arr[10][10]){
    for (int k = 0; k <= 10 ; k++) {
        arr[k][k] = arr[k][k];
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "\t" << (j + 1) * (i + 1);
            arr[i][j] = (j + 1) * (i + 1);
        }
        cout << endl;
    }

    cout << arr[1][1];

};

int main() {
    int **arr = new int *[10];
    int **sArr[10][10];

    //dynArr(arr);
    staticArr(sArr);
    return 0;
}

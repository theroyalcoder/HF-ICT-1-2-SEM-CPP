#include <iostream>
using namespace std;

int main() {
    int min(0), count(0);
    const int num(4);
    int arr[num] {2, 3, 4, 1};
    int arr2[num] {0, 0, 0, 0};

    for (int i = 1; i < num; i++)
    {
        min = i;

        for (int j = i + 1; j < min; j++)
        {
            if ( arr[i] <= min)
            {
                arr2[count] = arr[j];
                count++;
            }
        }
    }

    //Ausgabe Array
    for (int j = 0; j < num; j++)
    {
        cout << arr2[j] << endl;
    }

    return 0;
}
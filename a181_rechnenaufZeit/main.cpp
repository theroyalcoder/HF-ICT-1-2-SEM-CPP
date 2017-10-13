#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    int z1, z2, res;
    char a;

    //Initialize random-generator
    srand(time(NULL));

    z1 = rand()%6 + 1 %10;

    z2 = rand() %10;
    return 0;
}
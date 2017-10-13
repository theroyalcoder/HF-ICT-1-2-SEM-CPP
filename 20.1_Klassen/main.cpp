#include <iostream>
using namespace std;

class testClass {
public:
    void setValue (int x);

    void showValue();

private:
    int _a;

};

void testClass::setValue (int x) {
    _a = x;
}

void testClass::showValue(){
    cout << _a;
}

int main() {
    int a(0);
    testClass t;

    cout << "zahl eingeben: ";
    cin >> a;

    t.setValue(a);
    t.showValue();
    return 0;
}

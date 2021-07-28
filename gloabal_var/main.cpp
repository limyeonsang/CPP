#include <iostream>
#include "./constant.h"

using namespace std;

int val = 1; // can use in another file; external linkage
static int val1 = 2; // can't using at another cpp file; internal linkage

extern void anotherSome(); // forward declare; linking
extern int anotherA;

void some() {
    static int a = 1; // memory is static 
    ++a;
    cout << a << endl;
}

int main() {
    int val = 2;

    cout << ::val << " " << val << endl;

    some();
    some();

    anotherSome();

    cout << anotherA << endl;

    cout << Consts:pi << " " << &Consts:pi << endl;

    return 0;
}
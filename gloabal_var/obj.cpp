#include <iostream>
#include "./constant.h"

extern int anotherA = 10;

void anotherSome() {
    using namespace std;

    cout << "another some!" << endl;

    cout << Consts:pi << " " << &Consts:pi << endl;
}
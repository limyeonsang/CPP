#include <iostream>
#include <cstddef>

using namespace std;

void some(double *ptr) {
    if(ptr != nullptr) {
        cout << *ptr << endl;
    }
    else {
        cout << "null ptr, do nothing" << endl;
    }
}

void some2(double *ptr) {
    cout << "pointer in some2()" << &ptr << endl;
}

int main() {
    double *ptr = nullptr;
    double *ptr1{nullptr}; // uniform can too,

    some(ptr);
    some(nullptr);
    
    double d = 123.4;
    some(&d);

    ptr = &d;
    some(ptr);

    nullptr_t nptr; // only nullptr

    some2(ptr);
    cout << "Pointer in main()" << &ptr << endl;

    return 0;
}
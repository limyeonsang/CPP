#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "call A contructor" << endl; }
};

class B {
public:
    B(A a) { cout << "call B contructor" << endl; }
};

int main() {
    B b(A()); // it's not object creation
    // It means function that ...
    // return A to argument
    // input is function with no argument
    // return type is B

    return 0;
}
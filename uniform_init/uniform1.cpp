#include <iostream>
using namespace std;

class A {
 public:
    A() { cout << "call A contructor!" << endl; }

    A(int x) { cout << "call A contructor!!" << endl; }

    A(int x, double y) { cout << "call A contructor!!!" << endl; }
};

A func() {
    return {1, 2.3};
}

int main() {
    A a{};  // uniform initialization

    A b(3.5); // possible: Narrow-conversion, it convert to int
    //A c{3.5}; // impossible: Narrow-conversion, (error)

    func();
}
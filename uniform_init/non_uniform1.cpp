#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "call contructor" << endl; }
};

int main() {
    A a();

    return 0;
}

// nothing printed
// It's becomes a def of 'a' function, not 'A's obj creation
// because c++ compiler interprets to function everything that looks like function

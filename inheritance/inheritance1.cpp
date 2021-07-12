// Basic inheritance
#include <iostream>
using namespace std;

class Base {
private:
    int a;
public:
    int b;
protected:
    int c;    
};

class Derived : public Base {
public:

    Derived(int a_, int b_) {
        // a = a_; private is inaccessible
        b = b_;

        c = 3;
        cout << c << "  " << b << endl; 
    }

    
};

int main() {
    Base base;
    Derived derived(2,4); 

    // base.a = 1; 
    base.b = 2;
    // base.c = 3; protected cant acces from outside


    cout << derived.b  << endl;
    // cout << derived.c  << endl;

    return 0;
}
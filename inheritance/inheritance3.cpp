// overriding

#include <iostream>
using namespace std;

class ParentClass {
public:
    void parentFunc() {
        cout << "parentClass" << endl;
    }
};

class ChildClass : public ParentClass {
public:
    void parentFunc() {
        ParentClass::parentFunc();
        cout << "childClass" << endl;
    }
};

int main() {
    ChildClass cc;

    cc.parentFunc();
    cc.ParentClass::parentFunc();

    return 0;
}
// multiple inheritance

#include <iostream>
using namespace std;

class ParentClass1 {
public:
    void printFunc1() { cout << "pc1" << endl; }
    void sameFunc() { cout << "same" << endl; }
};

class ParentClass2 {
public:
    void printFunc2() { cout << "pc2" << endl; }
    void sameFunc() { cout << "same" << endl; }
};

class ParentClass3 {
public:
    void printFunc3() { cout << "pc3" << endl; }
    void sameFunc() { cout << "same" << endl; }
};

class ChildClass : public ParentClass1, public ParentClass2, public ParentClass3 {

};

int main() {
    ChildClass cc;

    cc.printFunc1();
    cc.printFunc2();
    cc.printFunc3();

    // cc.sameFunc() error
    cc.ParentClass1::sameFunc();

    return 0;
}
// Constructor and Destructor

#include <iostream>
using namespace std;

class FstClass{
public:
    FstClass() {
        cout << "FstClass Constructor" << endl;
    }
    ~FstClass() {
        cout << "FstClass Destructor" << endl;
    }
};

class ScdClass : public FstClass {
public:
    ScdClass() {
        cout << "ScdClass Constructor" << endl;
    }
    ~ScdClass() {
        cout << "ScdClass Destructor" << endl;
    }
};

class ThdClass : public ScdClass {
public:
    ThdClass() {
        cout << "ThdClass Constructor" << endl;
    }
    ~ThdClass() {
        cout << "ThdClass Destructor" << endl;
    }
};

int main() {
    ThdClass third;

    return 0;
}
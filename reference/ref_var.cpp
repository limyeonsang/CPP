#include <iostream>
using namespace std;

struct Some
{
    int v1;
    float v2;
};

struct Other {
    Some sm;
};



void chN(int &n) {
    n = 10;
    cout << "chN() " << n << endl;
    cout << "chN() " << &n << endl;
}

void constchN(const int &n) {
    // n = 10;
}

int main() {
    // generic pointer 
    int val = 5;
    int *ptr = nullptr;
    ptr = &val;

    // ref_val
    int &ref = val;
    cout << ref << endl;
    
    ref = 10;
    cout << ref << endl;

    cout << &val << endl; 
    cout << &ptr << endl; // ptr has own adress
    cout << &ref << endl; // adress is same with val

    const int y = 8;
    // int &ref = y; // Can't input const
    const int &constRef = y;
    cout << endl;

    int n = 5;
    cout << "main() " << n << endl;
    cout << "main() " << &n << endl;
    chN(n);
    cout << "main() " << n << endl;

    Other ot;
    ot.sm.v1 = 1.0;

    int &v1 = ot.sm.v1; // with reference
    v1 = 1;

    return 0;
}
// size of data tpye 

#include <iostream>
using namespace std;

int main() {
    char c = 'A';
    short sh = 10;
    int i = 100;
    double d = 3.14;

    cout << sizeof(c) << ' ';
    cout << sizeof(sh) << ' ';
    cout << sizeof(i) << ' ';
    cout << sizeof(d) << ' ' << endl;


    char* pc = &c;
    short* psh = &sh;
    int* pi = &i;
    double* pd = &d;
    
    // pointer is always 4byte
    cout << sizeof(pc) << ' ';
    cout << sizeof(psh) << ' ';
    cout << sizeof(pi) << ' ';
    cout << sizeof(pd) << ' ' << endl;
}
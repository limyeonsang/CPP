// pointer basic

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* pa = nullptr;
    pa = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << pa << endl;
    cout << &pa << endl;
    cout << *&pa << endl;
    cout << **&pa << endl;
    cout << *&*&*&*&*&*&pa << endl;

    return 0;
}
// template can take over overloading
#include <iostream>
using namespace std;

// original, with overloading
int sum1(int a, int b) {
    return a+b;
}

double sum1(double a, double b) {
    return a+b;
}

// with template
template <typename T> // <typename T> or <class T> both are possible
T sum(T a, T b) {
    return a+b;
}

// arguments types are diff
template <class T1, class T2> // compiler judge data type
void printAll(T1 a, T2 b) {
    cout << a << endl;
    cout << b << endl;
    cout << endl;
};

int main() {
    int i1 = 111;
    int i2 = 222;

    double d1 = 11.1;
    double d2 = 22.2;

    cout << sum<int>(i1, i2) << endl;
    cout << sum<double>(d1, d2) << endl;
    cout << endl;

    printAll(i1, i2);
    printAll(i1, d2);
    printAll(i2, d1);

    return 0;
}
#include <iostream>
#include "./symbolic_const.h"

using namespace std;

void print(const int n) {
    // n = 124; cant
    int nn = n; // if you want change val.
    cout << n << endl;
}

int main() {
    print(1);
    const double gravity{ 9.8 };


    constexpr int compil_time_const(123); // constexpr = compile time const 
    int runtime;
    cin >> runtime;
    const int sruntime(runtime); // runtime


    double radius;
    cin >> radius;
    double circumference = 2.0 * radius * constants::pi;

    return 0;
}
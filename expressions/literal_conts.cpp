#include <iostream>

int main() {
    using namespace std;

    const float pi = 3.14f; // f: float / l: double
    int i = -1234u; // u: unsigned, ll, LL, LU ~

    unsigned int n = 5u;
    long n2 = 5L;
    double d = 6.0e-10; // 6.0 * 10^-10

    // Octall: 8
    // Decimal: 10
    // Hexa: 16

    int x = 0b1010'1010'1010 ;
    cout << x << endl;

    int y = 012; 
    cout << y << endl;

    int z = 0xF;
    cout << z << endl;
    


    return 0;
}
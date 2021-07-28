#include <iostream>
#include <typeinfo>
#include <iomanip>

int main() {
    using namespace std;

    cout << typeid(4.0).name() << endl;

    int a = (int)1.0; //explicit cast
    cout << typeid(a).name() << endl; 

    //numeric promotion
    char c = 'A';
    int i = c; 

    //numeric conversion
    i = 30000;
    c = i;
    cout << static_cast<int>(c) << endl;

    double d = 0.123456789;
    float f = d;
    cout << setprecision(12) << f << endl;

    cout << 5u - 10u << endl;

    int ni1 = static_cast<int>(4.0);
    int ni2 = (int)4.0;
    int ni3 = int(4.0); 

    return 0;
}
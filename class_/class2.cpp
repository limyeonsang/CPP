// overloading

#include <iostream>
using namespace std;

class Calculator {
public:
    int mul(int w, int h) {
        return w * h;
    }
    double mul(double w, double h) {
        return w * h + 1;
    }
};

int main() {
    Calculator cal;

    cout << cal.mul(3, 4) << endl;
    cout << cal.mul(3.0, 4.0) << endl;

    return 0;
}
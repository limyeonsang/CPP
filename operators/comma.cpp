#include <iostream>

int main() {
    using namespace std;

    int a = 1, b = 10;
    int z;

    z = a, b; // comma's priority lower then '=', it's means equal (z=a),b
    cout << z << endl;

    return 0;
}